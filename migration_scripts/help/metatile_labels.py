import os
import io
import argparse
import struct
import json
import re

metatile_labels_path = "include/constants/metatile_labels.h"

with open(metatile_labels_path) as metatile_labels_file:
    new_lines = []
    for line in metatile_labels_file:
        regex = r"(#define\s*METATILE_.*)(0x[0-9A-Fa-f]+)"
        find = re.search(regex, line)
        if find is None:
            new_lines += line
        else:
            num = int(find[2], 16)
            if num > 640:
                num = num + (1024 - 640)
                new_lines += find[1] + hex(num) + "\n"
            else:
                new_lines += line

with open(metatile_labels_path, 'w') as metatile_labels_file:
    for new_line in new_lines:
        metatile_labels_file.write(new_line)
