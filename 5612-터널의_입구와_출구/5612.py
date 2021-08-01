import sys

n = int(sys.stdin.readline())
m = int(sys.stdin.readline())
max = 0

for i in range(n):
    In, Out = map(int, sys.stdin.readline().split())
    m += In
    m -= Out
    if m < 0:
        max = 0
        break
    if max < m: max = m

print(max)
