'''
輸入為：單行空白分隔。
比如：給定一行，包含若干個整數
1 3 5 7 9
'''
ls = [int(x) for x in input().split()]

print('讀取到 ls', ls)
