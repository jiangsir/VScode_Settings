import os


n = 100
for i in range(n):
    os.system(f'python3 maketestfile.py {(i+10)*10} > a486_{i:02d}.in')
    os.system(f'python3 a486.py < a486_{i:02d}.in > a486_{i:02d}.out')
    