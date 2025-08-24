import os
import re

re_get_num = re.compile(r'(#define[\t ]+[A-Za-z_\-][A-Za-z_\-0-9]*[ \t]+)([0-9]+)(.*)')

start_line = '#define ITEM_POTION 28\n'
end_line = '#define ITEMS_COUNT 841\n'
is_started = False
is_done = False

file = 'include/constants/items.h'
file_split = os.path.split(file)
file_new = os.path.join(*file_split[:-1], f'new_{file_split[-1]}')
inc = 1

with open(file) as f, open(file_new, 'w') as f_new:
    for line in f:
        if not is_started and not is_done and line == start_line:
                is_started = True
        
        if is_started and not is_done:
            if e := re_get_num.search(line):
                f_new.write(e[1] + str(int(e[2]) + inc) + e[3] + '\n')
            else:
                f_new.write(line)
            if line == end_line:
                is_done = True
        else:
            f_new.write(line)