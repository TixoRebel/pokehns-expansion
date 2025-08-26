import os
import re
import shutil

surfables_old = './graphics/object_events/pics/pokemon/surfable/'

re_rename_surfable = re.compile(r'[0-9]+_(.*)')

for subdir, dirs, files in os.walk(surfables_old):
     for file in files:
        new_file = os.path.join(subdir, re_rename_surfable.search(file)[1])
        file = os.path.join(subdir,file)
        shutil.move(file, new_file)