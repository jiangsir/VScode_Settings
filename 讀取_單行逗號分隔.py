'''
輸入為：單行逗號分隔。
比如：給定一行，包含若干個整數
1,3,56,79,912
'''
ls = [int(x) for x in input().split(',')]

print('讀取到 ls', ls)
