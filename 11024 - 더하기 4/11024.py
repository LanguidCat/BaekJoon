import sys

for i in range(int(sys.stdin.readline())):
    N = list(map(int, sys.stdin.readline().split()))
    print(sum(N))
