import sys

for i in range(int(sys.stdin.readline())):
    N, K = map(int, sys.stdin.readline().split())
    Candy = list(map(int, sys.stdin.readline().split()))
    M = 0
    for j in range(N):
        if Candy[j] >= K: M += Candy[j] // K
    print(M)
