#!/usr/bin/env python3
"""Generate unsuffixed JSON data files from version-suffixed sources.

This script copies (or optionally merges in the future) the content of
`<name>_<build>.json` files to their unsuffixed targets:

  data/layouts/layouts.json            <- data/layouts/layouts_<build>.json
  data/maps/map_groups.json            <- data/maps/map_groups_<build>.json
  src/data/heal_locations.json         <- src/data/heal_locations_<build>.json
  src/data/wild_encounters.json        <- src/data/wild_encounters_<build>.json

Determination of <build>:
  1. Command line argument `--build <name> <clean>` if supplied.
  2. Environment variable BUILD_NAME.
  3. Environment variable MAP_VERSION (fallback).

If a source file does not exist it is skipped with a warning; the script exits
non‑zero only if `--strict` is passed and at least one required source is
missing.

Usage examples (from project root Makefile):

  python3 tools/gen_versioned_json.py --build $(BUILD_NAME) $(VERSIONED_JSON_CLEAN)
  # or rely on env
  BUILD_NAME=$(BUILD_NAME) python3 tools/gen_versioned_json.py
"""

from __future__ import annotations
import argparse
import json
import os
import sys
from typing import List, Tuple

ROOT = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(ROOT)  # project root (contains Makefile)

Task = Tuple[str, str]  # (source, target)

def read_map_version_file() -> str | None:
    path = os.path.join(ROOT, "../map_version.s")
    try:
        with open(path, "r", encoding="utf-8") as f:
            val = f.read().strip()
            return val or None
    except (FileNotFoundError, OSError):
        return None

def read_map_group_core() -> str | None:
    path = os.path.join(ROOT, "../data/maps/map_groups.json")
    try:
        with open(path, "r", encoding="utf-8") as f:
            val = f.read().strip()
            return val or None
    except (FileNotFoundError, OSError):
        return None

def detect_build_name(cli_build: str | None, clean: bool) -> str | None:
    if clean is True:
        """if map_version.s exists, that is the build being 'cleaned', else return None"""
        env = read_map_version_file() or os.environ.get("MAP_VERSION")
        return env or None
    if cli_build:
        return cli_build
    env = os.environ.get("BUILD_NAME")
    if env:
        return env
    env = os.environ.get("MAP_VERSION")
    if env:
        return env
    return None

def detect_clean(cli_clean: bool | None) -> bool:
    if cli_clean is not None:
        return cli_clean
    val = os.environ.get("VERSIONED_JSON_CLEAN")
    if not val:
        return False
    return val.lower() in ("1", "true", "yes")

def build_tasks(build: str, clean: bool) -> List[Task]:
    if build is None:
        return []
    else:
        """if map_groups.json exists, then we are not building after 'clean'"""
        if clean or read_map_group_core():
            return [
                ("../data/layouts/layouts.json", f"../data/layouts/layouts_{build}.json"),
                ("../data/maps/map_groups.json", f"../data/maps/map_groups_{build}.json"),
                ("../src/data/heal_locations.json", f"../src/data/heal_locations_{build}.json"),
                ("../src/data/wild_encounters.json", f"../src/data/wild_encounters_{build}.json"),
            ]
        else:
            return [
                (f"../data/layouts/layouts_{build}.json", "../data/layouts/layouts.json"),
                (f"../data/maps/map_groups_{build}.json", "../data/maps/map_groups.json"),
                (f"../src/data/heal_locations_{build}.json", "../src/data/heal_locations.json"),
                (f"../src/data/wild_encounters_{build}.json", "../src/data/wild_encounters.json"),
            ]

def copy_json(src: str, dst: str) -> str:
    """Load + dump to ensure valid JSON; preserve formatting (compact)."""
    with open(src, "r", encoding="utf-8") as f:
        data = json.load(f)
    os.makedirs(os.path.dirname(dst), exist_ok=True)
    # Write with default separators for compactness; adjust if pretty needed.
    with open(dst, "w", encoding="utf-8") as f:
        json.dump(data, f, ensure_ascii=False, indent=2)
        f.write("\n")  # final newline
    return f"WROTE {dst} from {src}"

def main() -> int:
    parser = argparse.ArgumentParser(description="Generate unsuffixed JSON data files from version-specific sources.")
    parser.add_argument("--build", help="Build/version name (emerald, hns, etc). Overrides env BUILD_NAME/MAP_VERSION.")
    parser.add_argument("--strict", action="store_true", help="Fail if any expected source file is missing.")
    parser.add_argument("--clean", dest="clean", action="store_true", help="Force clean mode (overrides env).")
    parser.set_defaults(clean=None)
    args = parser.parse_args()

    clean = detect_clean(args.clean)
    build = detect_build_name(args.build, clean)
    if not build:
        print("[ERROR] No build name supplied (use --build or set BUILD_NAME/MAP_VERSION).", file=sys.stderr)
        return 2

    tasks = build_tasks(build, clean)
    missing: List[str] = []
    actions: List[str] = []

    for rel_src, rel_dst in tasks:
        src = os.path.join(ROOT, rel_src)
        dst = os.path.join(ROOT, rel_dst)
        if not os.path.exists(src):
            missing.append(rel_src)
            continue
        try:
            if not clean and os.path.exists(dst):
                try:
                    src_stat = os.stat(src)
                    dst_stat = os.stat(dst)
                    if src_stat.st_size == dst_stat.st_size:
                        with open(src, 'rb') as fs, open(dst, 'rb') as fd:
                            if fs.read() == fd.read():
                                actions.append(f"SKIP {rel_dst} (already up-to-date)")
                                continue
                except OSError:
                    pass
            actions.append(copy_json(src, dst))
        except Exception as e:
            print(f"[ERROR] Failed processing {rel_src}: {e}", file=sys.stderr)
            return 1

    if missing:
        msg = "; ".join(missing)
        if args.strict:
            print(f"[ERROR] Missing required source files for build '{build}': {msg}", file=sys.stderr)
            return 3
        else:
            print(f"[WARN] Missing source files (skipped): {msg}")

    print("Generation summary:")
    if actions:
        for a in actions:
            print(f" - {a}")
    else:
        print(" - No changes (all targets already up-to-date or sources missing).")
    return 0

if __name__ == "__main__":
    raise SystemExit(main())
