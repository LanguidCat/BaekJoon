import sys

sum = 0
C, K, P = map(int, sys.stdin.readline().split())
for i in range(1, C + 1):
    sum += K * i + P * i ** 2
print(sum)
