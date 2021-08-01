import sys

N = int(sys.stdin.readline())

for i in range(N):
    r, e, c = map(int, sys.stdin.readline().split())
    if r > (e - c): print("do not advertise")
    elif r < (e - c): print("advertise")
    else: print("does not matter")
