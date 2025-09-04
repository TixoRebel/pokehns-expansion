import os
import re
import contextlib
import shutil
import json
import difflib
import copy

# iterate through every single data/maps/<MAP>/map.json
# build a list of valid item names from include/constants/items.h

items_regex = r"^#define (ITEM_.*?)\b"
items = []

with open("include/constants/items.h") as items_file:
    for line in items_file:
        item_match = re.search(items_regex, line)
        if item_match is not None:
            items.append(item_match[1])

print(items)

regex = r".*?_EventScript_(Item_.*)"

for subdir, dirs, files in os.walk("data/maps"):
    for file in files:
        if file == 'map.json':
            with contextlib.suppress(KeyError):
                map_path = os.path.join(subdir,file)
                print("-----Map-----")
                print(map_path)
                with open(map_path) as map_file:
                    map_json = json.load(map_file)
                    for i, object_event in enumerate(map_json["object_events"]):
                        if object_event["graphics_id"] == "OBJ_EVENT_GFX_ITEM_BALL" and object_event["trainer_sight_or_berry_tree_id"] == "0":
                            print("-----Script-----")
                            print(object_event["script"])
                            script_match = re.search(regex, object_event["script"])
                            if script_match is not None:
                                close = script_match[1].upper()
                                print(close)
                                close = difflib.get_close_matches(close, items)[0] # find closest match in valid item names
                                print(close)
                                object_event["trainer_sight_or_berry_tree_id"] = close
                                object_event["script"] = "Common_EventScript_FindItem"
                                # map_json["object_events"][i]["trainer_sight_or_berry_tree_id"] = close
                                # map_json["object_events"][i]["script"] = "Common_EventScript_FindItem"
                    
                with open(map_path, 'w') as map_file:
                    json.dump(map_json, map_file, indent=2)
