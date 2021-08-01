import sys

for i in range(int(sys.stdin.readline())):
    N, M = map(int, sys.stdin.readline().split())
    if N <= 11 or M <= 3: print(-1)
    else: print(11 * M + 4)
