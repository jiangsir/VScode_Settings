'''
輸入有若干行。輸入的每一行有一個正整數 y，代表西元年份。
輸入以 EOF 作為結束。
例：
2016
2017
2018
2019

'''
import sys
for line in sys.stdin:
    y = int(line)
    print('讀取到 y=', y)


