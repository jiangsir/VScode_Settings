from collections import deque
def f(x):
    return 2 * int(x) - 3
def g(x, y):
    return (2 * int(x)) + int(y) - 7
def h(x, y, z):
    return (3 * int(x)) - (2 * int(y)) + int(z)

def call(ss: list):
    '''
    合成函數遞迴解 使用 deque
    '''
    if len(ss) == 0:
        return

    c = ss.popleft()
    if c.isalpha():
        if c=='f':
            return f(call(ss))
        elif c=='g':
            return g(call(ss), call(ss))
        elif c=='h':
            return h(call(ss), call(ss), call(ss))
    elif c.isdigit():
        return int(c)


dq = deque(input().split())
print(call(dq))


'''
f f f 2
h f 5 g f 3 4 3
'''