import sys

A, B, C, D = map(int, sys.stdin.readline().split())
LST = list(map(int, sys.stdin.readline().split()))

for i in LST:
    idx = 0
    if 1 <= i % (A + B) <= A: idx += 1
    if 1 <= i % (C + D) <= C: idx += 1
    print(idx)
