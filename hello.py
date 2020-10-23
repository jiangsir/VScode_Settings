def solv(a1, b1, a2, b2):
	if a1>a2:
		a1, a2 = a2, a1
		b1, b2 = b2, b1
	if a2 <= b1:
		print('Yes')
	else:
		print('No')

n = int(input())
a = 0
b = 1
for i in range(n):
    b = a + b
    a = b - a
    print(b)

