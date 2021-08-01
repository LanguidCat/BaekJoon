import sys

for i in range(int(sys.stdin.readline())):
    N, D = map(int, sys.stdin.readline().split())
    idx = 0
    for j in range(N):
        v, f, c = map(int, sys.stdin.readline().split())
        if v * f // c >= D: idx += 1
    print(idx)
