import sys

N = int(sys.stdin.readline())

dots = 2
for i in range(N): dots += dots - 1

print(dots ** 2)
