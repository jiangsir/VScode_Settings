'''
輸入若干行，直到 EOF 為止。
每行有若干個整數。
例：
1 3 5 7 9
2 4 6 8 10 12 14 16 18
1000 2000 3000 4000 5000 6000 7000 8000

'''
import sys

for line in sys.stdin:
    ls = [int(x) for x in line.split()]
    print('最大值=', max(ls))
