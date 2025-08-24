import os
import re
import shutil

re_get_event_obj_define = re.compile(r'#define[\t ]+OBJ_EVENT_GFX_([A-Za-z0-9\-_]+)[\t ]+([0-9]+)')
re_get_event_obj_use = re.compile(r'^(.*OBJ_EVENT_GFX_)([A-Za-z0-9\-_]+)(.*)$')

event_obj_old = '../pokeemerald-expansion/include/constants/event_objects.h'
event_obj_new = '../pokemonHnS/include/constants/event_objects.h'

obj_old = {}
obj_map = {}

search_dir = './data/maps/'

with open(event_obj_old) as f:
    for line in f:
        if e := re_get_event_obj_define.search(line):
            obj_old[int(e[2])] = e[1]

with open(event_obj_new) as f:
    for line in f:
        if e := re_get_event_obj_define.search(line):
            obj_map[obj_old[int(e[2])]] = e[1]

for subdir, dirs, files in os.walk(search_dir):
    for file in files:
        root, extension = os.path.splitext(file)
        if extension[1:] in [ 'json', 'inc' ]:
            old_file = os.path.join(subdir, file)
            new_file = os.path.join(subdir, file) + '.tmp'
            with open(old_file) as f, open(new_file, 'w') as f_new:
                for line in f:
                    if e := re_get_event_obj_use.search(line):
                        new_obj = obj_map.get(e[2], None)
                        if new_obj != None:
                            f_new.write(e[1] + new_obj + e[3] + '\n')
                        else:
                            f_new.write(line)
                    else:
                        f_new.write(line)
            shutil.copy(new_file, old_file)
            os.remove(new_file)
