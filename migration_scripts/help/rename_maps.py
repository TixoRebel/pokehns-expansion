import os
import re
import contextlib
import shutil
import json

old_folder = '/home/andrew/pokemonHnS/'
new_folder = '/home/andrew/pokemonHnS-main/'

modify_folder = '/home/andrew/pokehns-expansion/'

re_get_var_define = re.compile(r'^[\t ]*\.include[\t ]+"data.maps/([A-Za-z0-9_\-]+)/scripts.inc"')

def get_map_folders(event_script_path: str):
    with open(event_script_path) as f:
        for line in f:
            if e := re_get_var_define.search(line):
                yield e[1]

def load_json(file: str):
    with open(file) as f:
        return json.load(f)

def diff_add_dict(old_val: str, new_val: str, diff: dict):
    if old_val != new_val:
        diff[old_val] = new_val

to_delete = set()
to_rename = dict()
to_rename_inv = dict()

for old, new in zip(get_map_folders(os.path.join(old_folder, 'data/event_scripts.s')), get_map_folders(os.path.join(new_folder, 'data/event_scripts.s'))):
    if new == 'DELETE':
        to_delete.add(old)
    elif new != old:
        to_rename[old] = new
    to_rename_inv[new] = old

# print(to_delete)

# for folder in to_delete:
#     with contextlib.suppress(FileNotFoundError):
#         shutil.rmtree(os.path.join(modify_folder, 'data/maps', folder))
#     with contextlib.suppress(FileNotFoundError):
#         shutil.rmtree(os.path.join(modify_folder, 'data/layouts', folder))

# for old, new in to_rename.items():
#     shutil.move(os.path.join(modify_folder, 'data/maps', old), os.path.join(modify_folder, 'data/maps', new))
#     shutil.move(os.path.join(modify_folder, 'data/layouts', old), os.path.join(modify_folder, 'data/layouts', new))

id_dict = dict()
name_dict = dict()
layout_dict = dict()
rename_dict = dict()

for subdir, dirs, files in os.walk(os.path.join(new_folder, 'data/maps')):
    for file in files:
        if file == 'map.json':
            map_folder_name = os.path.split(subdir)[-1]
            with contextlib.suppress(KeyError):
                old_json = load_json(os.path.join(old_folder, 'data/maps', to_rename_inv[map_folder_name], file))
                new_json = load_json(os.path.join(new_folder, 'data/maps', map_folder_name, file))

                # diff_add_dict(old_json['id'], new_json['id'], id_dict)
                # diff_add_dict(old_json['name'], new_json['name'], name_dict)
                # diff_add_dict(old_json['layout'], new_json['layout'], layout_dict)
                
                if old_json['name'] != new_json['name']:
                    rename_dict[map_folder_name] = (old_json['name'], new_json['name'])


# print(id_dict)

for subdir, dirs, files in os.walk(os.path.join(modify_folder, 'data/maps')):
    for file in files:
        # root, extension = os.path.splitext(file)
        # if extension[1:] in [ 'json', 'inc' ]:
        #     filepath = os.path.join(subdir, file)
        #     with open(filepath) as f:
        #         s = f.read()
        #     for old, new in id_dict.items():
        #         if old in s:
        #             s = re.sub(f'\\b{old}\\b', new, s)
        #     for old, new in layout_dict.items():
        #         if old in s:
        #             s = re.sub(f'\\b{old}\\b', new, s)
        #     for old, new in name_dict.items():
        #         if old in s:
        #             s = re.sub(f'\\b{old}\\b', new, s)
        #     with open(filepath, "w") as f:
        #         f.write(s)
        if file == 'scripts.inc' or file == 'map.json':
            names = rename_dict.get(os.path.split(subdir)[-1], None)
            if names != None:
                old_name, new_name = names
                filepath = os.path.join(subdir, file)
                with open(filepath) as f:
                    s = f.read()
                    s = re.sub(f'\\b{old_name}', new_name, s)
                with open(filepath, "w") as f:
                    f.write(s)
