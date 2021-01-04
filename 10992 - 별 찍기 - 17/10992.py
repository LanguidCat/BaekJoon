import sys
N = int(sys.stdin.readline())

for i in range(1, N + 1):
    indent = " " * (N - i)
    if i == N: stars = "*" * (N + i - 1)
    else:
        if i == 1: stars = "*"
        else: stars = "*" + " " * (2 * (i - 2) + 1) + "*"
    
    print(indent, end = '')
    print(stars)
