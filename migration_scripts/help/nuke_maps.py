import os
import re

re_get_flag_define = re.compile(r'#define[\t ]+(FLAG_[A-Za-z_\-0-9]*)')
re_get_flag_use = re.compile(r'^(.*)(FLAG_[A-Za-z_\-0-9]*)(.*$)')

re_get_trainer_define = re.compile(r'^Name: ([A-Za-z_\-][A-Za-z_\-0-9]*)')
re_get_trainer_use = re.compile(r'^(.*\bTRAINER_)((?!TYPE)[a-zA-Z_\-][a-zA-Z_\-0-9]*)(.*)')

garbage_flag = 'FLAG_GARBAGEFLAG'
garbage_trainer = 'NONE'

flags_file = 'include/constants/flags.h'
flags = set()

trainers_file = 'src/data/trainers.party'
trainers = set()

maps_folder = '../pokeemerald-expansion/data/maps/'
new_maps_folder = '../pokeemerald-expansion/data/new_maps/'

with open(flags_file) as f:
    for line in f:
        if e := re_get_flag_define.search(line):
            flags.add(e[1])

with open(trainers_file) as f:
    for line in f:
        if e := re_get_trainer_define.search(line):
            trainers.add(e[1])

for subdir, dirs, files in os.walk(maps_folder):
    for file in files:
        root, extension = os.path.splitext(file)
        if extension[1:] in [ 'json', 'inc' ]:
            with open(os.path.join(subdir, file)) as f, open(os.path.join(subdir.replace(maps_folder, new_maps_folder), file), 'w') as f_new:
                for line in f:
                    if e := re_get_flag_use.search(line):
                        if e[2] not in flags:
                            f_new.write(e[1] + garbage_flag + e[3] + '\n')
                        else:
                            f_new.write(line)
                    elif e := re_get_trainer_use.search(line):
                        if e[2] not in trainers:
                            f_new.write(e[1] + garbage_trainer + e[3] + '\n')
                        else:
                            f_new.write(line)
                    else:
                        f_new.write(line)
