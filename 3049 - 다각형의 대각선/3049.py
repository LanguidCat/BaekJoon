import sys

N = int(sys.stdin.readline())

if N < 4: print(0)
else: print(int(N * (N - 1) * (N - 2) * (N - 3) / (4 * 3 * 2 * 1)))
