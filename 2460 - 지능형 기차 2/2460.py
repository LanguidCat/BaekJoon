import sys

sum = 0
M = 0
for i in range(10):
    a, b = map(int, sys.stdin.readline().split())
    sum += b - a
    if sum > M: M = sum
print(M)
