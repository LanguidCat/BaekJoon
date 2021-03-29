import sys

a, b, c, n = map(int, sys.stdin.readline().split())
ans = 0
for i in range(0, n + 1, a):
    for j in range(0, n + 1, b):
        for k in range(0, n + 1, c):
            if i + j + k == n: ans = 1
print(ans)
