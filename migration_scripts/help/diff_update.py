import os
import re
import shutil


re_get_event_obj_define = re.compile(r'#define[\t ]+OBJ_EVENT_GFX_([A-Za-z0-9\-_]+)[\t ]+([0-9]+)')
re_get_event_obj_use = re.compile(r'^(.*OBJ_EVENT_GFX_)([A-Za-z0-9\-_]+)(.*)$')

event_obj_old = '../pokeemerald-expansion/include/constants/event_objects.h'
event_obj_new = '../pokemonHnS/include/constants/event_objects.h'

event_obj_start_old = '#define OBJ_EVENT_GFX_BRENDAN_NORMAL               0\n'
event_obj_end_old = '#define OBJ_EVENT_GFX_LIGHT_SPRITE               241\n'

event_obj_start_new = '#define OBJ_EVENT_GFX_BRENDAN_NORMAL               0\n'
event_obj_end_new = '#define OBJ_EVENT_GFX_HOOH                       238\n'


re_get_var_define = re.compile(r'#define[\t ]+VAR_([A-Za-z0-9\-_]+)[\t ]+(0x[0-9A-Fa-f]+)')
re_get_var_use = re.compile(r'^(.*VAR_)([A-Za-z0-9\-_]+)(.*)$')

vars_old = '../pokeemerald-expansion/include/constants/vars.h'
vars_new = '../pokemonHnS/include/constants/vars.h'


maps_dir = './data/maps/'

def do_replace(re_define, re_use, old_path, new_path, search_path, file_types, start_line_old, end_line_old, start_line_new, end_line_new):
    dict_old = {}
    is_started = False
    with open(old_path) as f:
        for line in f:
            if not is_started:
                if line == start_line_old:
                    is_started = True
            else:
                if e := re_define.search(line):
                    dict_old[int(e[2])] = e[1]
                if line == end_line_old:
                    break

    dict_map = {}
    set_new = set()
    is_started = False
    with open(new_path) as f:
        for line in f:
            if not is_started:
                if line == start_line_new:
                    is_started = True
            else:
                if e := re_define.search(line):
                    dict_map[dict_old[int(e[2])]] = e[1]
                    set_new.add(e[1])
                if line == end_line_new:
                    break

    for subdir, dirs, files in os.walk(search_path):
        for file in files:
            root, extension = os.path.splitext(file)
            if extension[1:] in file_types:
                old_file = os.path.join(subdir, file)
                new_file = os.path.join(subdir, file) + '.tmp'
                with open(old_file) as f, open(new_file, 'w') as f_new:
                    for line in f:
                        if e := re_use.search(line):
                            if e[2] not in set_new:
                                new_item = dict_map.get(e[2], None)
                                if new_item != None:
                                    f_new.write(e[1] + new_item + e[3] + '\n')
                                else:
                                    f_new.write(line)
                            else:
                                f_new.write(line)
                        else:
                            f_new.write(line)
                os.remove(old_file)
                shutil.move(new_file, old_file)

do_replace(re_get_event_obj_define, re_get_event_obj_use, event_obj_old, event_obj_new, maps_dir, [ 'json', 'inc' ], event_obj_start_old, event_obj_end_old, event_obj_start_new, event_obj_end_new)

