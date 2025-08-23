import os
import re

r_str_name = re.compile(r'^[a-zA-Z0-9 _-]+u8[ \t]+([a-zA-Z0-9_]+)\[\][ \t]*(?:=|;)')

string_files = [ './src/strings.c', './include/strings.h' ]
found_in_files = []

def get_strings_in_file(file: str):
    with open(file) as f:
        for line in f:
            if m := r_str_name.search(line):
                for g in m.groups():
                    yield g

def rem_dupes_from_file(file: str, dupes: [str]):
    file_split = os.path.split(file)
    with open(file) as f, open(os.path.join(*file_split[:-1], f'new_{file_split[-1]}'), 'w') as new_f:
        for line in f:
            if m := r_str_name.search(line):
                for str_name in m.groups():
                    if str_name in dupes:
                        new_f.write(f'// {line}')
                        break
                else:
                    new_f.write(line)
            else:
                new_f.write(line)
                        

for subdir, dirs, files in os.walk('./'):
    for file in files:
        root, extension = os.path.splitext(file)
        if extension[1:] in [ 'c', 'h' ]:
            path = os.path.join(subdir, file)
            if path not in string_files:
                found_in_files.extend(get_strings_in_file(path))

for file in string_files:
    rem_dupes_from_file(file, found_in_files)