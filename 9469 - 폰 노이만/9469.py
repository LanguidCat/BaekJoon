import sys

for i in range(int(sys.stdin.readline())):
    n, D, A, B, F = map(float, sys.stdin.readline().split())
    N = int(n)
    time = D / (A + B)
    ans = F * time
    print(f"{N} {ans}")
