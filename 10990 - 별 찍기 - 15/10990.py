import sys

N = int(sys.stdin.readline())

for i in range(N):
    indent = ' ' * (N - i - 1)
    if i == 0: stars = '*'
    else: stars = '*' + ' ' * (2 * (i - 1) + 1) + '*'
    
    print(indent + stars)
