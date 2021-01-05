import sys

N, W, H = map(int, sys.stdin.readline().split())
box = (W ** 2 + H ** 2) ** 0.5
for i in range(N):
    a = int(sys.stdin.readline())
    if a <= box: print("DA")
    else: print("NE")
