import os
import io
import argparse
import struct
import json
import re

# Some context for how and why this script works:
#
## Low-level programs, especially at the embedded and ROM design levels, try to be as efficient as possible.
## A common method is to minimize wasted space down to the Bit (Bits obviously being the famous 1s and 0s);
## a challenge presented by the necessary standard of grouping data into a minimum unit of Bytes (8 bits).
## The GameBoy Advance, in particular, can work with 32-Bit (4-Byte) variables at largest,
## so each variable can technically represent up to 256 unique values (1 Byte, 1 Char, etc.),
## 65,536 values (2 Bytes, 1 Half-Word, etc.), or 4,294,967,296 values (4 Bytes, 1 Word, etc.).
## **FUN FACT** 4 Bits (half a Byte) is called a "Nibble"!
#
## But perhaps you know a variable only needs 10 values (0-9, or 0b1001 in binary), and therefore only 4 Bits.
## The other 4 Bits of the 8-Bit Byte will go completely unused as long as a 17th unique value isn't needed.
## However, let's say you have another variable that you know needs less than 17 unique possible values,
## or instead a variable that you know needs 12 Bits for up to 4096 possible values (2^12).
## Either of those variables would be wasting an additional 4 Bits,
## which is already an entire 1-Byte variable's worth of data wasted.
#
## Instead, programmers figured out a way to use a single 8-, 16-, or 32-Bit variable to store multiple smaller ones.
## The tools used to achieve this are generally referred to as "Bitfields" and "Bit Manipulation",
## which also offers a peek into how computers and electronic calculators work at the lowest level.
#
## This script is a combination of the procedures and included scripts at these two links:
## https://github.com/pret/pokeemerald/wiki/Triple-layer-metatiles
## https://github.com/pret/pokeemerald/wiki/Expanding-The-Metatile-Count
## It uses Bit Manipulation to translate the Data Formats (how Bitfields are used) of pret's pokeemerald decomp
## into a Format that is even more data-efficient, [NOT YET additionally updating relevant C code in the project as best possible.]
## However, **PLEASE NOTE** that it does not make any changes to your Porymap, AdvanceMap, or other tools.
## To ensure your mapping tools continue to work for you, please follow the instructions in those links.
#
## This Format Conversion includes:
## 1. Converting existing Tilesets from the Double Layer Metatile Format to the Triple Layer Metatile Format.
##   - This involves converting each 8-Half-Word Chunk of a Tileset's "metatiles.bin" into a 12-Half-Word Chunk.
##     - Each Chunk of "metatiles.bin" represents the set of 8 (or 12) Tiles that make up a respective Metatile.
##       - Each Half-Word contains both a Tile ID and a Palette ID, which in combination define the pixel colors of a Tile.
##       - Each Metatile contains 4 Tiles per Layer, so each new Third Layer contains 4 transparent Tiles.
##         - This is because, functionally, the Third Layer of each Metatile already exists as a transparent Layer.
##         - The Layer order is defined by the "Layer Type" value in each 1-Half-Word Chunk of "metatile_attributes.bin".
## 2. Increasing the maximum number of possible Metatiles per Tileset, from the default 1024, to 2048 or 4096.
##   - This involves using a free Collision Bit and/or sacrificial Elevation Bit as Metatile ID Bits instead.
##     - Each Half-Word Chunk of a Layout's "map.bin" or "border.bin" represents a gridspace in a map.
##       - 10 (by default, maximum 12) Metatile ID Bits define the appearance of a gridspace.
##       - 4 (by default, minimum 3) Elevation Bits define the Elevation of any Object in a gridspace (such as the Player).
##       - 2 (by default, minimum 1) Collision Bits define if Objects can move into the gridspace (by normal means).


# Some context-specific Bit Manipulation definitions for understanding this code:
#
## Bit "Mask": a constant binary value where 1s represent the relevant Bits of a variable, and 0s for all others.
##          This value gets "Bitwise AND"ed (X & Y) with a variable to set all irrelevant Bits to 0.
#
## Bit "Shift": a constant integer value of the number of irrelevant lower Bits of a variable.
##           This value is the amount a variable is "Bit-Shifted" (X >> Y) for the resulting value to be the desired value.
#
## "Upper" and "Lower" Bits: like with decimal numbers, the rightmost digits of a binary number are "least significant",
##                            and the leftmost are "most significant". "Upper" and "Lower" refer to significance ranking.


## As our first example, every 16 Bits (aka every 2-Byte "Half-Word") of each Tileset's "metatile_attributes.bin"
## stores the "Layer Type" value of a Metatile in its upper 4 Bits, and the "Layer Attribute" in its lower 12 Bits.
LAYER_TYPE_MASK      = 0xF000   # 0b11110000`00000000 - the 4 upper Bits of a 16-Bit value
LAYER_TYPE_SHIFT     = 12       # the number of lower Bits irrelevant to the Layer Type value
META_ATTRIBUTE_MASK  = 0x0FFF   # 0b00001111`11111111 - the 12 lower Bits

## Let's say we read a Metatile Attribute value of 0b*1010*1010`10101010,
## where (*s for visual clarity) *1010* are the 4 Layer Type Bits.
## We can manually identify these bits and maybe even calculate their decimal value of 10.
## However, for the computer to do this, it needs to apply the Bit Mask and Bit Shift.
#
## Bitwise AND-ing LAYER_TYPE_MASK with the value will output 0b*1010*0000`00000000 (decimal 40,960),
## and Right-Shifting *that* value by LAYER_TYPE_SHIFT will output 0b1010 (decimal 10).
## In this specific (python) example, because there are no values "above" the upper 4 Bits,
## applying the Mask is actually unnecessary (but still a good habit) as the Right-Shift removes the 12 lower Bits.


def convert_tilesets_to_triple(tileset_dirs):
    '''
    Adds a Third Layer of Tiles to each Metatile in the "metatiles.bin" file of each Tileset in the project,
    ordering the Layers of each Metatile as defined by its Layer Type value,
    found in the "metatiles.bin"'s respective "metatile_attributes.bin".
    '''

    for tileset_dir in tileset_dirs:
        tileset_name = os.path.basename(tileset_dir)
        metatiles_path = os.path.join(tileset_dir, 'metatiles.bin')
        metatile_attributes_path = os.path.join(tileset_dir, 'metatile_attributes.bin')
        if not os.path.exists(metatiles_path):
            print(f"[SKIP] {tileset_name} skipped because metatiles.bin was not found.")
            continue
        if not os.path.exists(metatile_attributes_path):
            print(f"[SKIP] {tileset_name} skipped because metatile_attributes.bin was not found.")
            continue
        if os.path.getsize(metatiles_path) != 8*os.path.getsize(metatile_attributes_path):
            if os.path.getsize(metatiles_path) != 12*os.path.getsize(metatile_attributes_path):
                print(f"[SKIP] {tileset_name} skipped because metatiles.bin is not eight (or twelve) times the size of metatile_attributes.bin (bad data?)")
            else:
                print(f"[SKIP] {tileset_name} skipped because metatiles.bin is twelve times the size of metatile_attributes.bin (already converted?)")
            continue

        # build up separate lists of Layer Type and Meta Attribute values from metatile_attributes.bin
        layer_types = []
        meta_attributes = []
        with open(metatile_attributes_path, 'rb') as fileobj:
            for chunk in iter(lambda: fileobj.read(2), ''): # each chunk in metatile_attributes.bin is 2 Bytes
                if chunk == b'': # a null Byte means EOF (End Of File)
                    break
                metatile_attribute = struct.unpack('<H', chunk)[0] # read 1 Half-Word into 1 array item
                meta_attributes.append(metatile_attribute & META_ATTRIBUTE_MASK) # retrieves the Meta Attribute
                layer_types.append((metatile_attribute & LAYER_TYPE_MASK) >> LAYER_TYPE_SHIFT) # retrieves the Layer Type
        
        # build up a list of the new 24-Byte (12-Half-Word) Metatile Data values
        i = 0
        new_metatile_data = []
        with open(metatiles_path, 'rb') as fileobj:
            for chunk in iter(lambda: fileobj.read(16), ''): # each chunk in metatiles.bin is 16 Bytes
                if chunk == b'': # a null Byte means EOF (End Of File)
                    break
                metatile_data = struct.unpack('<HHHHHHHH', chunk) # read 8 Half-Words into 8 array items
                if layer_types[i] == 0: # Layer Type Normal - Bottom Layer empty
                    new_metatile_data += [0]*4
                    new_metatile_data += metatile_data
                elif layer_types[i] == 1: # Layer Type Covered - Top Layer empty
                    new_metatile_data += metatile_data
                    new_metatile_data += [0]*4
                elif layer_types[i] == 2: # Layer Type Split - Middle Layer empty
                    new_metatile_data += metatile_data[:4] # first 4 Half-Words
                    new_metatile_data += [0]*4
                    new_metatile_data += metatile_data[4:] # last 4 Half-Words
                else: # if no valid Layer Type found, all 3 Layers are now empty
                    new_metatile_data += [0]*12
                i += 1

        metatile_buffer = struct.pack(f'<{len(new_metatile_data)}H', *new_metatile_data)
        metatile_attribute_buffer = struct.pack(f'<{len(meta_attributes)}H', *meta_attributes)

        with open(metatiles_path, 'wb') as fileobj:
            fileobj.write(metatile_buffer)
        
        with open(metatile_attributes_path, 'wb') as fileobj:
            fileobj.write(metatile_attribute_buffer)
        
        print(f'[OK] Converted {tileset_name}')


def read_map_bin(file_path):
    with open(file_path, "rb") as f:
        data = f.read()
        return list(struct.unpack("<" + "H" * (len(data) // 2), data))

def write_map_bin(file_path, new_data):
    with open(file_path, "wb") as f:
        f.write(struct.pack("<" + "H" * len(new_data), *new_data))

#define MAPGRID_METATILE_ID_MASK 0x07FF // Bits 0-10
#define MAPGRID_COLLISION_MASK   0x0800 // Bits 11
#define MAPGRID_ELEVATION_MASK   0xF000 // Bits 12-15
#define MAPGRID_METATILE_ID_SHIFT 0
#define MAPGRID_COLLISION_SHIFT  11
#define MAPGRID_ELEVATION_SHIFT  12

# old_metatile_id_mask = 0x03FF # Bits 0-9
# old_collision_mask   = 0x0C00 # Bits 10-11
# old_elevation_mask   = 0xF000 # Bits 12-15

# old_num_metatile_id_bits = 10
# old_num_collision_bits = 2
# old_num_elevation_bits = 4

# new_metatile_id_mask = 0x0FFF # Bits 0-11
# new_collision_mask   = 0x1000 # Bit 12
# new_elevation_mask   = 0xE000 # Bits 13-15

# new_num_metatile_id_bits = 12
# new_num_collision_bits = 1
# new_num_elevation_bits = 3

# old_metatile_count = 2 ** old_num_metatile_id_bits
# new_metatile_count = 2 ** new_num_metatile_id_bits

def process_map_data(old_data, offset):
    new_data = []
    
    for value in old_data:
        metatile_id = value & old_metatile_id_mask
        collision = (value & old_collision_mask) >> old_num_metatile_id_bits
        elevation = (value & old_elevation_mask) >> (old_num_metatile_id_bits + old_num_collision_bits)
        
        # if elevation is the old maximum value, set it to the new maximum instead
        if elevation == (old_elevation_mask >> (old_num_metatile_id_bits + old_num_collision_bits)):
            elevation = new_elevation_mask

        # if a metatile's ID is greater than the size of the primary tileset, it is in the secondary tileset and needs to be shifted accordingly
        if metatile_id >= offset:
            metatile_id = metatile_id + ((new_metatile_count // 2) - offset) # the secondary tileset now begins at half of the total metatile count

        # re-combine the sub-values into the new format
        new_value = metatile_id | ((collision & new_collision_mask) << new_num_metatile_id_bits) | ((elevation & new_elevation_mask) << (new_num_metatile_id_bits + new_num_collision_bits))
        new_data.append(new_value)
    return new_data

def process_border_data(old_data, offset):
    new_data = []
    for value in old_data:
        metatile_id = value & old_metatile_id_mask

        if metatile_id >= offset:
            metatile_id = metatile_id + ((new_metatile_count // 2) - offset) # the secondary tileset now begins at half of the total metatile count

        new_data.append(metatile_id)
    return new_data


if __name__ == "__main__":

    parser = argparse.ArgumentParser(description='Use arguments to either Convert pokeemerald Metatiles to use the Triple Layer system, Expand the number of available Metatiles, or both.',
                                     epilog='Must be run from the project\'s root folder or specify it with -r or --root.')
    parser.add_argument('-r', '--root', default='',
                        help='Path to the root directory of your pokeemerald project, e.g. /path/to/pokeemerald')
    parser.add_argument('-t', '--tsroot', default='data/tilesets',
                        help='Path to the tilesets directory in your pokeemerald project, e.g. /path/to/pokeemerald/data/tilesets')
    parser.add_argument('-m', '--loroot', default='data/layouts',
                        help='Path to the layouts directory in your pokeemerald project, e.g. /path/to/pokeemerald/data/layouts')
    parser.add_argument('-l', '--layers', default=2, choices=[2,3],
                        help='Whether or not to attempt to Convert from Double to Triple Layer Metatiles. Cannot be used to Convert from Triple back to Double.')
    parser.add_argument('-c', '--colbits', default=True, choices=[True,False],
                        help='Whether or not to attempt to Expand the number of available Metatiles by recycling an unused Collisions bit.')
    parser.add_argument('-e', '--elvbits', default=False, choices=[True,False],
                        help='Whether or not to attempt to Expand the number of available Metatiles by repurposing an Elevations bit, halving available elevation values.')

    args = parser.parse_args()

    # Validate the CWD or given Root
    if not args.root == '':
        if not os.path.exists(args.root):
            print(f"[ERR] Given root directory does not exist: {args.root}")
            print(f"[SKIP] Attempting to use current working directory instead: {os.getcwd()}")
        else:
            print(f"[INFO] Setting current working directory to given root directory: {args.root}")
            os.chdir(args.root)
    else:
        print(f"[INFO] Defaulting to current working directory: {os.getcwd()}")

    # Validate the default/given tilesets directory root
    if not os.path.exists(args.tsroot):
        print(f"Given tilesets root directory does not exist: {args.tsroot}")
        exit(1)

    primary_path = os.path.join(args.tsroot, 'primary')
    if not os.path.exists(primary_path):
        print(f"[ERR] Given tilesets root directory does not contain a primary folder, aborting.")
        exit(1)
    
    secondary_path = os.path.join(args.tsroot, 'secondary')
    if not os.path.exists(secondary_path):
        print(f"[ERR] Given tilesets root directory does not contain a secondary folder, aborting.")
        exit(1)

    # Validate the default/given layouts directory root
    if not os.path.exists(args.loroot):
        print(f"Given layouts root directory does not exist: {args.loroot}")
        exit(1)

    layouts_path = os.path.join(args.loroot, 'layouts.json')
    if not os.path.exists(layouts_path):
        print(f"[ERR] Given layouts root directory does not contain a layouts.json, aborting.")
        exit(1)

    # Validate user requests for conversion
    if not (args.layers == 3 or args.colbits or args.elvbits):
        print(f"[ERR] This will not result in any changes to your project, aborting.")
        exit(1)

    # Prepare and Validate all known source files
    fieldmap_path          = 'include/fieldmap.h'           # may change the define "NUM_TILES_PER_METATILE" from 8 to 12
        # may also change the defines "NUM_METATILES_IN_PRIMARY", "NUM_METATILES_TOTAL", and add "MAX_ELEVATION_LEVEL"
    
    global_fieldmap_path   = 'include/global.fieldmap.h'    # may add "METATILE_LAYER_TYPE_DOOR = 0xFF" to the METATILE_LAYER_TYPE enum
        # may also read and write the values of "MAPGRID_METATILE_ID_MASK", "MAPGRID_COLLISION_MASK", "MAPGRID_ELEVATION_MASK", "MAPGRID_COLLISION_SHIFT", and "MAPGRID_ELEVATION_SHIFT"

    field_camera_path      = 'src/field_camera.h'           # may make a number of changes:
        # - DrawMetatile new definition (including METATILE_LAYER_TYPE_DOOR as 0xFF)
        # - DrawDoorMetatile will now call DrawMetatile with METATILE_LAYER_TYPE_DOOR instead of METATILE_LAYER_TYPE_COVERED

    shop_path              = 'src/shop.c'                   # may make a number of changes:
        # - BuyMenuDrawMapBg will replace a call to MapGridGetMetatileLayerTypeAt with the constant METATILE_LAYER_TYPE_NORMAL
        # - A new function IsMetatileLayerEmpty will be inserted before BuyMenuDrawMapMetatile
        # - BuyMenuDrawMapMetatile new definition (including calls to IsMetatileLayerEmpty)

    metatile_labels_path   = 'include/constants/metatile_labels.h' # all values greater than a determined value (end of primary tileset) must be increased

    # these two files are used to confidently retrieve a tileset filepath from the tileset variable names in layouts.json
    tilesets_headers_path  = 'src/data/tilesets/headers.h'
    metatiles_path         = 'src/data/tilesets/metatiles.h'

    if args.layers == 3:
        tileset_dirs = []

        _, dirs, _ = next(os.walk(primary_path))
        tileset_dirs += map(lambda d: os.path.join(primary_path, d), dirs)
        _, dirs, _ = next(os.walk(secondary_path))
        tileset_dirs += map(lambda d: os.path.join(secondary_path, d), dirs)

        convert_tilesets_to_triple(tileset_dirs)

        {
            # WIP code to modify source

            # with open(fieldmap_path, 'r+') as fieldmap_file:
            #     fieldmap = fieldmap_file.read()
            #     find = r"#define NUM_TILES_PER_METATILE ([0-9]+)"
            #     replace = r"#define NUM_TILES_PER_METATILE 12"
            #     new_fieldmap = re.sub(find, replace, fieldmap)
            #     fieldmap_file.seek(0)
            #     fieldmap_file.write(new_fieldmap)
            #     fieldmap_file.truncate()

            # with open(global_fieldmap_path, 'r+') as global_fieldmap_file:
            #     global_fieldmap = global_fieldmap_file.read()
            #     find = r"(enum[\s\n]*{(?:([\s\n]*)METATILE_LAYER_TYPE_(?!DOOR).*)+)([\s\n]*})"
            #     replace = r"\1\2METATILE_LAYER_TYPE_DOOR = 0xFF,\3"
            #     new_global_fieldmap = re.sub(find, replace, global_fieldmap)
            #     global_fieldmap_file.seek(0)
            #     global_fieldmap_file.write(new_global_fieldmap)
            #     global_fieldmap_file.truncate()

            # with open(field_camera_path, 'r+') as field_camera_file:
                # replacing an entire function will require dedicated scripting... TODO

            # change src/field_camera.c - 
            # - DrawMetatile to new definition (including METATILE_LAYER_TYPE_DOOR as 0xFF)
            # - DrawDoorMetatile's call to METATILE_LAYER_TYPE_DOOR instead of METATILE_LAYER_TYPE_COVERED
            # change src/shop.c -
            # - BuyMenuDrawMapBg switch MapGridGetMetatileLayerTypeAt call to METATILE_LAYER_TYPE_NORMAL
            # - Insert new function IsMetatileLayerEmpty
            # - BuyMenuDrawMapMetatile to new definition
        }
        
    else:
        print(f"[SKIP] Not converting to triple layer metatile format.")

    if args.colbits or args.elvbits:
        global old_metatile_id_mask, old_collision_mask, old_elevation_mask, old_num_metatile_id_bits, old_num_collision_bits, old_num_elevation_bits
        global new_metatile_id_mask, new_collision_mask, new_elevation_mask, new_num_metatile_id_bits, new_num_collision_bits, new_num_elevation_bits
        global num_tiles_per_metatile

        with open(fieldmap_path) as fieldmap_file:
            fieldmap = fieldmap_file.read()
            regex = r"#define NUM_TILES_PER_METATILE ([0-9]+)"
            num_tiles_per_metatile = int(re.search(regex, fieldmap_file)[1], 10) # assumes NUM_TILES_PER_METATILE will be decimal

        with open(global_fieldmap_path) as global_fieldmap_file:
            global_fieldmap = global_fieldmap_file.read()
            
            regex = r"#define MAPGRID_METATILE_ID_MASK (0x[0-9A-Fa-f]+)"
            old_metatile_id_mask = int(re.search(regex, global_fieldmap_file)[1], 16) # assumes MAPGRID_METATILE_ID_MASK will be hexadecimal

            regex = r"#define MAPGRID_COLLISION_MASK (0x[0-9A-Fa-f]+)"
            old_collision_mask = int(re.search(regex, global_fieldmap_file)[1], 16) # assumes MAPGRID_COLLISION_MASK will be hexadecimal

            regex = r"#define MAPGRID_ELEVATION_MASK (0x[0-9A-Fa-f]+)"
            old_elevation_mask = int(re.search(regex, global_fieldmap_file)[1], 16) # assumes MAPGRID_ELEVATION_MASK will be hexadecimal

            regex = r"#define MAPGRID_COLLISION_SHIFT ([0-9]+)"
            old_num_metatile_id_bits = int(re.search(regex, global_fieldmap_file)[1], 10) # assumes MAPGRID_COLLISION_SHIFT will be decimal

            regex = r"#define MAPGRID_ELEVATION_SHIFT ([0-9]+)"
            old_num_collision_bits = int(re.search(regex, global_fieldmap_file)[1], 10) - old_num_metatile_id_bits  # assumes MAPGRID_ELEVATION_SHIFT will be decimal

            old_num_elevation_bits = 16 - (old_num_metatile_id_bits + old_num_collision_bits)

        # determine the post-expansion state
        new_num_collision_bits   = old_num_collision_bits - args.colbits
        new_num_elevation_bits   = old_num_elevation_bits - args.elvbits

        if new_num_collision_bits < 1:
            print(f"[SKIP] Already at minimum 1 collision bit, cannot reduce to zero. Proceeding...")
            args.colbits = 0
            new_num_collision_bits = old_num_collision_bits

        if new_num_elevation_bits < 3:
            print(f"[SKIP] Already at minimum 3 elevation bits, cannot reduce further. Proceeding...")
            args.elvbits = 0
            new_num_elevation_bits = old_num_elevation_bits

        # Validate if metatile format is actually being changed
        if not (args.colbits or args.elvbits):
            print(f"[ERR] Neither collision or elevation bits are being reduced, aborting.")
            exit(1)

        new_num_metatile_id_bits = old_num_metatile_id_bits + args.colbits + args.elvbits

        # post-expansion masks
        new_metatile_id_mask = old_metatile_id_mask | (old_metatile_id_mask << (args.colbits + args.elvbits))
        new_collision_mask   = old_collision_mask >> (old_num_metatile_id_bits + args.colbits)
        new_elevation_mask   = old_elevation_mask >> (old_num_metatile_id_bits + old_num_collision_bits + args.elvbits)

        # the maximum number of metatiles per tileset pre-and-post-expansion
        old_metatile_count = 2 ** old_num_metatile_id_bits
        new_metatile_count = 2 ** new_num_metatile_id_bits

        if args.colbits:
            print(f"[INFO] Decreasing number of Collision Bits from {old_num_collision_bits} to {new_num_collision_bits}")

        if args.elvbits:
            print(f"[INFO] Decreasing number of Elevation Bits from {old_num_elevation_bits} to {new_num_elevation_bits}")

        print(f"[INFO] Increasing number of Metatile ID Bits from {old_num_metatile_id_bits} to {new_num_metatile_id_bits}")
        print(f"[INFO] Increasing maximum possible number of Metatiles per Tileset from {old_metatile_count} to {new_metatile_count}")
        
        with open(layouts_path) as layouts_file, \
            open(tilesets_headers_path) as tileset_headers_file, \
            open(metatiles_path) as metatiles_file:

            layouts = json.load(layouts_file)
            tileset_headers = tileset_headers_file.read()
            metatiles = metatiles_file.read()

            # iterate through all layouts in the project, updating the metatile format of every map.bin and border.bin file.
            # additionally, build a dictionary of the tileset variable names those layouts use, and the size of the respective tileset
            tileset_sizes = {}
            for layout in layouts['layouts']:
                primary_tileset_variable_name = layout['primary_tileset']
                map_path = layout['blockdata_filepath']
                border_path = layout['border_filepath']

                # have not encountered this tileset yet
                if primary_tileset_variable_name not in tileset_sizes.keys():
                    regex = primary_tileset_variable_name + r"(?:[^}]|\n)*\.metatiles = (.*),"
                    metatiles_variable = re.search(regex, tileset_headers)[1]

                    regex = metatiles_variable + r"\[\] = INCBIN_U16\(\"(.*)\"\)\;"
                    tileset_file = re.search(regex, metatiles)[1]

                    # len(data) is in Bytes, so the tileset size (number of metatiles) is that length divided by the number of Bytes per metatile
                    # Bytes per metatile = 2 bytes per tile * 4 tiles per layer * <2 or 3> layers per metatile
                    with open(tileset_file, "rb") as f:
                        data = f.read()
                        tileset_sizes[primary_tileset_variable_name] = (len(data) // (2 * num_tiles_per_metatile))

                # update the map.bin file
                print(f"Processing {map_path}...")
                old_data = read_map_bin(map_path)
                new_data = process_map_data(old_data, tileset_sizes[primary_tileset_variable_name])
                write_map_bin(map_path, new_data)
                
                # update the border.bin file
                print(f"Processing {border_path}...")
                old_data = read_map_bin(border_path)
                new_data = process_border_data(old_data, tileset_sizes[primary_tileset_variable_name])
                write_map_bin(border_path, new_data)

            print("Found the following Primary Tilesets and their number of metatiles:")
            print(tileset_sizes)
    else:
        print(f"[SKIP] Not expanding number of maximum possible Metatiles per Tileset.")
