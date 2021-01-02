import sys

X, L, R = map(int, sys.stdin.readline().split())

tmp = 100001
for i in range(L, R + 1):
    if tmp > abs(X - i):
        tmp = abs(X - i)
        result = i

print(result)
