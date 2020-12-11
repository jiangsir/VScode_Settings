'''
輸入的第一行有一個整數 n。第二行有 n 個正整數 y，代表西元年份。
例：
4
2016 2017 2018 2019

'''
n = int(input())
ls = [int(x) for x in input().split()]
print('讀到 ls=', ls)
