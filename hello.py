def solv(a1, b1, a2, b2):
	if a1>a2:
		a1, a2 = a2, a1
		b1, b2 = b2, b1
	if a2 <= b1:
		print('Yes')
	else:
		print('No')

n = int(input())
for i in range(n):
	a1, b1, a2, b2 = map(int, input().split())
	solv(a1, b1, a2, b2)




#import random
# for i in range(1000):
# 	a1 = random.randint(0,200)
# 	b1 = random.randint(100,100001)
# 	a2 = random.randint(10,100001)
# 	b2 = random.randint(10,100001)
