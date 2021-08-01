import sys

n, a, b = map(int, sys.stdin.readline().split())
x = [list(map(int, sys.stdin.readline().split())) for _ in range(n)]

ans = x[a - 1][b - 1]
for i in range(n):
    if ans < x[i][b - 1]: ans = x[i][b - 1]
for i in range(n):
    if ans < x[a - 1][i]: ans = x[a - 1][i]

if ans == x[a - 1][b - 1]: print("HAPPY")
else: print("ANGRY")
