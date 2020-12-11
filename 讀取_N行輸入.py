'''
輸入的第一行有一個整數 n。接下來的 n 行每行有一個正整數 y，代表西元年份。
例：
4
2016
2017
2018
2019

'''
n = int(input())
for i in range(n):
    y = int(input())
    print('讀到 y=', y)
