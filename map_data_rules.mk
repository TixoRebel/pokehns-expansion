# Map JSON data

# Inputs
MAPS_DIR = $(DATA_ASM_SUBDIR)/maps
LAYOUTS_DIR = $(DATA_ASM_SUBDIR)/layouts

# Determines the maps required for the game version being built by reading the map_groups versioned json.
MAP_GROUPS_FILE := $(MAPS_DIR)/map_groups_$(MAP_VERSION).json
ACTIVE_MAPS := $(shell python3 -c 'import json,os;f="$(MAP_GROUPS_FILE)";d=json.load(open(f)) if os.path.exists(f) else {};order=d.get("group_order",[]);maps=[];[maps.extend(d.get(g,[])) for g in order];print(" ".join(maps))')

MAP_JSONS := $(foreach m,$(ACTIVE_MAPS),$(MAPS_DIR)/$(m)/map.json)

ifeq ($(MAP_VERSION),emerald)
MAP_SUFFIX := 
else
MAP_SUFFIX := _$(MAP_VERSION)
endif

# Derive map json paths and directories from ACTIVE_MAPS instead of wildcarding every folder
MAP_DIRS := $(sort $(dir $(MAP_JSONS)))

# Outputs
MAPS_OUTDIR := $(MAPS_DIR)
LAYOUTS_OUTDIR := $(LAYOUTS_DIR)
INCLUDECONSTS_OUTDIR := include/constants

AUTO_GEN_TARGETS += $(INCLUDECONSTS_OUTDIR)/map_groups.h
AUTO_GEN_TARGETS += $(INCLUDECONSTS_OUTDIR)/layouts.h
AUTO_GEN_TARGETS += $(INCLUDECONSTS_OUTDIR)/map_event_ids.h
AUTO_GEN_TARGETS += $(DATA_SRC_SUBDIR)/map_group_count.h

MAP_CONNECTIONS := $(patsubst $(MAPS_DIR)/%/,$(MAPS_DIR)/%/connections.inc,$(MAP_DIRS))
MAP_EVENTS := $(patsubst $(MAPS_DIR)/%/,$(MAPS_DIR)/%/events.inc,$(MAP_DIRS))
MAP_HEADERS := $(patsubst $(MAPS_DIR)/%/,$(MAPS_DIR)/%/header.inc,$(MAP_DIRS))

$(DATA_ASM_BUILDDIR)/maps.o: $(DATA_ASM_SUBDIR)/maps.s $(LAYOUTS_DIR)/layouts.inc $(LAYOUTS_DIR)/layouts_table.inc $(MAPS_DIR)/headers.inc $(MAPS_DIR)/groups.inc $(MAPS_DIR)/connections.inc $(MAP_CONNECTIONS) $(MAP_HEADERS)
	$(PREPROC) $< charmap.txt | $(CPP) $(CPP_ASFLAGS) -I include - | $(PREPROC) -ie $< charmap.txt | $(AS) $(ASFLAGS) -o $@
$(DATA_ASM_BUILDDIR)/map_events.o: $(DATA_ASM_SUBDIR)/map_events.s $(MAPS_DIR)/events.inc $(MAP_EVENTS)
	$(PREPROC) $< charmap.txt | $(CPP) $(CPP_ASFLAGS) -I include - | $(PREPROC) -ie $< charmap.txt | $(AS) $(ASFLAGS) -o $@

# Pattern rule matches directories that already include the version suffix in their names
$(MAPS_OUTDIR)/%/header.inc $(MAPS_OUTDIR)/%/events.inc $(MAPS_OUTDIR)/%/connections.inc: $(MAPS_DIR)/%/map.json $(LAYOUTS_DIR)/layouts.json
	$(MAPJSON) map $(MAP_VERSION) $< $(LAYOUTS_DIR)/layouts.json $(@D)

$(MAPS_OUTDIR)/connections.inc $(MAPS_OUTDIR)/groups.inc $(MAPS_OUTDIR)/events.inc $(MAPS_OUTDIR)/headers.inc $(INCLUDECONSTS_OUTDIR)/map_groups.h $(DATA_SRC_SUBDIR)/map_group_count.h: $(MAPS_DIR)/map_groups.json $(MAP_JSONS)
	@$(MAPJSON) groups $(MAP_VERSION) $(MAPS_DIR)/map_groups.json $(MAPS_OUTDIR) $(INCLUDECONSTS_OUTDIR)
	@echo "$(MAPJSON) groups $(MAP_VERSION) $(MAPS_DIR)/map_groups.json <MAP_JSONS> $(MAPS_OUTDIR) $(INCLUDECONSTS_OUTDIR)"

$(LAYOUTS_OUTDIR)/layouts.inc $(LAYOUTS_OUTDIR)/layouts_table.inc $(INCLUDECONSTS_OUTDIR)/layouts.h: $(LAYOUTS_DIR)/layouts.json
	$(MAPJSON) layouts $(MAP_VERSION) $< $(LAYOUTS_OUTDIR) $(INCLUDECONSTS_OUTDIR)

# Ensure versioned JSON files are generated before targets that depend on them
$(MAPS_DIR)/map_groups.json: .versioned_json.stamp
$(LAYOUTS_DIR)/layouts.json: .versioned_json.stamp

# Generate constants for map events, which depend on data that's distributed across the map.json files.
# There's a lot of map.json files, so we print an abbreviated output with echo.
# When MAP_JSONS is empty (file doesn't exist at parse time), generate an empty header that will be regenerated later.
$(INCLUDECONSTS_OUTDIR)/map_event_ids.h: $(MAPS_DIR)/map_groups_$(MAP_VERSION).json $(MAP_JSONS)
	@if [ -n "$(strip $(MAP_JSONS))" ]; then \
		$(MAPJSON) event_constants $(MAP_VERSION) $(MAP_JSONS) $@; \
		echo "$(MAPJSON) event_constants $(MAP_VERSION) <MAP_JSONS> $@"; \
	else \
		echo "// Empty placeholder - no maps found during parse. Will be regenerated." > $@; \
		echo "Generating placeholder for $@ (will be regenerated on next make)"; \
	fi
