import sys

N = int(sys.stdin.readline())
LST = list(map(int, sys.stdin.readline().split()))

hits = 0
for i in range(N):
    if LST[i] != i + 1: hits += 1
print(hits)
