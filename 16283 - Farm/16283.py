import sys

a, b, n, w = map(int, sys.stdin.readline().split())

idx = 0
X = Y = 0
for i in range(1, n + 1):
    x = i
    y = n - i
    if x <= 0 or y <= 0: break
    if a * x + b * y == w and x + y == n:
        idx += 1
        X = x
        Y = y
if idx == 0 or idx >= 2: print(-1)
else: print(X, Y)
