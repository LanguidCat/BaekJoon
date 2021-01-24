import sys

N, M = map(int, sys.stdin.readline().split())
idx = N
while N:
    N //= M
    idx += N
print(idx)
