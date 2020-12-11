import random
ls = []
for i in range(100000):
    ls.append(str(random.randint(1800, 300000)))
print(','.join(ls))
