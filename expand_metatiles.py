import os
import struct
import json
import re

# set how the number of metatiles is being expanded
TRIPLE_LAYER_METATILES = True # each layer is represented by 4 tiles, so this defines if a metatile is defined by 8 or 12 tiles
REDUCE_COLLISION_BITS = True
REDUCE_ELEVATION_BITS = False

# set the pre-expansion state - number of bits representing each value in a 16(?)-bit variable
OLD_METATILE_BITS = 10
OLD_COLLISION_BITS = 2
OLD_ELEVATION_BITS = 4

# determine the post-expansion state
NEW_METATILE_BITS = OLD_METATILE_BITS + REDUCE_COLLISION_BITS + REDUCE_ELEVATION_BITS
NEW_COLLISION_BITS = OLD_COLLISION_BITS - REDUCE_COLLISION_BITS
NEW_ELEVATION_BITS = OLD_ELEVATION_BITS - REDUCE_ELEVATION_BITS

# build the pre-expansion mask
OLD_METATILE_MASK  = int('0' * (OLD_ELEVATION_BITS + OLD_COLLISION_BITS) + '1' * OLD_METATILE_BITS, base=2) # 0b0000001111111111 # if default 10-2-4 metatile-collision-elevation bits
OLD_COLLISION_MASK = int('0' * OLD_ELEVATION_BITS + '1' * OLD_COLLISION_BITS + '0' * OLD_METATILE_BITS, base=2) # 0b0000110000000000 # if ^
OLD_ELEVATION_MASK = int('1' * OLD_ELEVATION_BITS + '0' * (OLD_COLLISION_BITS + OLD_METATILE_BITS), base=2) # 0b1111000000000000

# post-expansion mask
NEW_COLLISION_MASK = OLD_COLLISION_MASK >> (OLD_METATILE_BITS + REDUCE_COLLISION_BITS)
NEW_ELEVATION_MASK = OLD_ELEVATION_MASK >> (OLD_METATILE_BITS + OLD_COLLISION_BITS + REDUCE_ELEVATION_BITS)

# the maximum number of metatiles per tileset pre-and-post-expansion
OLD_METATILE_COUNT = 2 ** OLD_METATILE_BITS
NEW_METATILE_COUNT = 2 ** NEW_METATILE_BITS

def process_map_data(old_data, offset):
    new_data = []
    
    for value in old_data:
        metatile_id = value & OLD_METATILE_MASK
        collision = (value & OLD_COLLISION_MASK) >> OLD_METATILE_BITS
        elevation = (value & OLD_ELEVATION_MASK) >> (OLD_METATILE_BITS + OLD_COLLISION_BITS)
        
        if elevation == (OLD_ELEVATION_MASK >> (OLD_METATILE_BITS + OLD_COLLISION_BITS)):
            elevation = NEW_ELEVATION_MASK

        if metatile_id >= offset:
            metatile_id = metatile_id + ((NEW_METATILE_COUNT // 2) - offset) # changed from *3 to *1 as only increasing from 1024 to 2048, not to 4096

        new_value = metatile_id | ((collision & NEW_COLLISION_MASK) << 11) | ((elevation & NEW_ELEVATION_MASK) << 12) # reduced shift amounts by 1 as only removing collision bit
        new_data.append(new_value)
    return new_data

def process_border_data(old_data, offset):
    new_data = []
    for value in old_data:
        metatile_id = value & OLD_METATILE_MASK

        if metatile_id >= offset:
            metatile_id = metatile_id + ((NEW_METATILE_COUNT // 2) - offset) #

        new_data.append(metatile_id)
    return new_data

def read_map_bin(file_path):
    with open(file_path, "rb") as f:
        data = f.read()
        return list(struct.unpack("<" + "H" * (len(data) // 2), data))

def write_map_bin(file_path, new_data):
    with open(file_path, "wb") as f:
        f.write(struct.pack("<" + "H" * len(new_data), *new_data))

def find_map_files(file_name="map.bin"):
    map_files = []
    for root, dirs, files in os.walk("data/layouts"):
        for file in files:
            if file == file_name:
                map_files.append(os.path.join(root, file))
    return map_files

def process_all_maps():
    map_files = find_map_files("map.bin")
    for map_file in map_files:
        print(f"Processing {map_file}...")
        old_data = read_map_bin(map_file)
        new_data = process_map_data(old_data)
        write_map_bin(map_file, new_data)

def process_all_borders():
    map_files = find_map_files("border.bin")
    for map_file in map_files:
        print(f"Processing {map_file}...")
        old_data = read_map_bin(map_file)
        new_data = process_border_data(old_data)
        write_map_bin(map_file, new_data)

def edit_headers():
    # 'include/global.fieldmap.h'
    # 'include/fieldmap.h'
    # 'src/event_object_movement.c'
    map_files = find_map_files("map.bin")
    for map_file in map_files:
        print(f"Processing {map_file}...")
        old_data = read_map_bin(map_file)
        print(old_data)
        break

def main():
    with open('data/layouts/layouts.json') as fL, open('src/data/tilesets/headers.h') as fT, open('src/data/tilesets/metatiles.h') as fM:
        layouts = json.load(fL)
        tilesets = fT.read()
        metatiles = fM.read()

        tileset_sizes = {}
        for layout in layouts['layouts']:
            primary_tileset_variable = layout['primary_tileset']
            map_file = layout['blockdata_filepath']
            border_file = layout['border_filepath']

            if primary_tileset_variable not in tileset_sizes.keys():
                # print(primary_tileset_variable)
                regex = primary_tileset_variable + r"(?:[^}]|\n)*\.metatiles = (.*),"
                # print(regex)
                metatiles_variable = re.search(regex, tilesets)[1]
                # print(metatiles_variable)
                regex = metatiles_variable + r"\[\] = INCBIN_U16\(\"(.*)\"\)\;"
                # print(regex)
                tileset_file = re.search(regex, metatiles)[1]

                with open(tileset_file, "rb") as f:
                    data = f.read()
                    tileset_sizes[primary_tileset_variable] = (len(data) // 24)

            print(f"Processing {map_file}...")
            old_data = read_map_bin(map_file)
            new_data = process_map_data(old_data, tileset_sizes[primary_tileset_variable])
            write_map_bin(map_file, new_data)
            
            print(f"Processing {border_file}...")
            old_data = read_map_bin(border_file)
            new_data = process_border_data(old_data, tileset_sizes[primary_tileset_variable])
            write_map_bin(border_file, new_data)

        print("Found the following Primary Tilesets and their number of metatiles:")
        print(tileset_sizes)      

        # print(json.dumps(primary_tileset_variable, indent=4))

if __name__ == "__main__":
    main()
    #process_all_maps()
    #process_all_borders()
