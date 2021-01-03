import sys

n = int(sys.stdin.readline())

N = [0, 1]
for i in range(2, n + 1):
    N.append(N[i - 2] + N[i - 1])
print(N[-1])
