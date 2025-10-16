import os
import re

reg = re.compile(r'^([\t ]*)\.evSpread[\t ]*=[\t ]*([^,]*),')

start_line = ''
end_line = ''
is_started = True
is_done = False

file = 'src/data/battle_frontier/battle_frontier_mons.h'
file_split = os.path.split(file)
file_new = os.path.join(*file_split[:-1], f'new_{file_split[-1]}')

with open(file) as f, open(file_new, 'w') as f_new:
    for line in f:
        if not is_started and not is_done and line == start_line:
                is_started = True
        
        if is_started and not is_done:
            if e := reg.search(line):
                f_new.write(f'{e[1]}.ev = TRAINER_PARTY_EVS({'252' if 'F_EV_SPREAD_HP' in e[2] else '0'}, {'252' if 'F_EV_SPREAD_ATTACK' in e[2] else '0'}, {'252' if 'F_EV_SPREAD_DEFENSE' in e[2] else '0'}, {'252' if 'F_EV_SPREAD_SPEED' in e[2] else '0'}, {'252' if 'F_EV_SPREAD_SP_ATTACK' in e[2] else '0'}, {'252' if 'F_EV_SPREAD_SP_DEFENSE' in e[2] else '0'}),\n')
            else:
                f_new.write(line)
            if line == end_line:
                is_done = True
        else:
            f_new.write(line)
