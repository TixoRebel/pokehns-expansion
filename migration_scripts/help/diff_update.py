import os
import re
import shutil


re_get_event_obj_define = re.compile(r'#define[\t ]+OBJ_EVENT_GFX_([A-Za-z0-9\-_]+)[\t ]+([0-9]+)')
re_get_event_obj_use = re.compile(r'^(.*OBJ_EVENT_GFX_)([A-Za-z0-9\-_]+)(.*)$')

event_obj_old = '../pokeemerald-expansion/include/constants/event_objects.h'
event_obj_new = '../pokemonHnS/include/constants/event_objects.h'


re_get_var_define = re.compile(r'#define[\t ]+VAR_([A-Za-z0-9\-_]+)[\t ]+(0x[0-9A-Fa-f]+)')
re_get_var_use = re.compile(r'^(.*VAR_)([A-Za-z0-9\-_]+)(.*)$')

vars_old = '../pokeemerald-expansion/include/constants/vars.h'
vars_new = '../pokemonHnS/include/constants/vars.h'


maps_dir = './data/maps/'

def do_replace(re_define, re_use, old_path, new_path, search_path, file_types):
    dict_old = {}
    with open(old_path) as f:
        for line in f:
            if e := re_define.search(line):
                dict_old[int(e[2], 16)] = e[1]

    dict_map = {}
    with open(new_path) as f:
        for line in f:
            if e := re_define.search(line):
                dict_map[dict_old[int(e[2], 16)]] = e[1]

    for subdir, dirs, files in os.walk(search_path):
        for file in files:
            root, extension = os.path.splitext(file)
            if extension[1:] in file_types:
                old_file = os.path.join(subdir, file)
                new_file = os.path.join(subdir, file) + '.tmp'
                with open(old_file) as f, open(new_file, 'w') as f_new:
                    for line in f:
                        if e := re_use.search(line):
                            new_item = dict_map.get(e[2], None)
                            if new_item != None:
                                f_new.write(e[1] + new_item + e[3] + '\n')
                            else:
                                f_new.write(line)
                        else:
                            f_new.write(line)
                os.remove(old_file)
                shutil.move(new_file, old_file)

do_replace(re_get_var_define, re_get_var_use, vars_old, vars_new, maps_dir, [ 'json', 'inc' ])

