import sys

N = int(sys.stdin.readline())

for i in range(N):
    T = int(sys.stdin.readline())
    a = list(map(int, sys.stdin.readline().split()))
    sum = 0
    for j in range(T):
        sum += a[j]
    print(sum)
