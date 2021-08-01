import sys

X, Y = map(int, sys.stdin.readline().split())
N = int(sys.stdin.readline())

xys = [X / Y]
for i in range(N):
    x, y = map(int, sys.stdin.readline().split())
    xys.append(x / y)
xys.sort()
RSLT = xys[0] * 1000
print(f"{RSLT:0.2f}")
