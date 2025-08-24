import os
import re
import shutil

# re_get_event_obj_define = re.compile(r'#define[\t ]+OBJ_EVENT_GFX_([A-Za-z0-9\-_]+)[\t ]+([0-9]+)')
# re_get_event_obj_use = re.compile(r'^(.*OBJ_EVENT_GFX_)([A-Za-z0-9\-_]+)(.*)$')

re_get_var_define = re.compile(r'#define[\t ]+VAR_([A-Za-z0-9\-_]+)[\t ]+(0x[0-9A-Fa-f]+)')
re_get_var_use = re.compile(r'^(.*VAR_)([A-Za-z0-9\-_]+)(.*)$')

# event_obj_old = '../pokeemerald-expansion/include/constants/event_objects.h'
# event_obj_new = '../pokemonHnS/include/constants/event_objects.h'

vars_old = '../pokeemerald-expansion/include/constants/vars.h'
vars_new = '../pokemonHnS/include/constants/vars.h'

# obj_old = {}
# obj_map = {}

var_old = {}
var_map = {}

search_dir = './data/maps/'

# with open(event_obj_old) as f:
#     for line in f:
#         if e := re_get_event_obj_define.search(line):
#             obj_old[int(e[2])] = e[1]

# with open(event_obj_new) as f:
#     for line in f:
#         if e := re_get_event_obj_define.search(line):
#             obj_map[obj_old[int(e[2])]] = e[1]

with open(vars_old) as f:
    for line in f:
        if e := re_get_var_define.search(line):
            var_old[int(e[2], 16)] = e[1]

with open(vars_new) as f:
    for line in f:
        if e := re_get_var_define.search(line):
            var_map[var_old[int(e[2], 16)]] = e[1]

for subdir, dirs, files in os.walk(search_dir):
    for file in files:
        root, extension = os.path.splitext(file)
        if extension[1:] in [ 'json', 'inc' ]:
            old_file = os.path.join(subdir, file)
            new_file = os.path.join(subdir, file) + '.tmp'
            with open(old_file) as f, open(new_file, 'w') as f_new:
                for line in f:
                    if e := re_get_var_use.search(line):
                        new_var = var_map.get(e[2], None)
                        if new_var != None:
                            print(f'{e[2]}: {new_var}')
                            f_new.write(e[1] + new_var + e[3] + '\n')
                        else:
                            f_new.write(line)
                    else:
                        f_new.write(line)
            os.remove(old_file)
            shutil.move(new_file, old_file)

# for subdir, dirs, files in os.walk(search_dir):
#     for file in files:
#         root, extension = os.path.splitext(file)
#         if extension[1:] in [ 'json', 'inc' ]:
#             old_file = os.path.join(subdir, file)
#             new_file = os.path.join(subdir, file) + '.tmp'
#             with open(old_file) as f, open(new_file, 'w') as f_new:
#                 for line in f:
#                     if e := re_get_event_obj_use.search(line):
#                         new_obj = obj_map.get(e[2], None)
#                         if new_obj != None:
#                             f_new.write(e[1] + new_obj + e[3] + '\n')
#                         else:
#                             f_new.write(line)
#                     else:
#                         f_new.write(line)
#             os.remove(old_file)
#             shutil.move(new_file, old_file)
