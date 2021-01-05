import sys

T = int(sys.stdin.readline())

for i in range(T):
    sum = 0
    s = int(sys.stdin.readline())
    sum += s
    n = int(sys.stdin.readline())
    for j in range(n):
        q, p = map(int, sys.stdin.readline().split())
        sum += q * p
    print(sum)
