import random, sys

ls = []
for i in range(int(sys.argv[1])):
    ls.append(str(random.randint(1800, 300000)))
print(','.join(ls))
