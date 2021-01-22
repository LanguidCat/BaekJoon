import sys

N = int(sys.stdin.readline())
A = list(map(int, sys.stdin.readline().split()))
M = int(sys.stdin.readline())
A.sort()

for a in list(map(int, sys.stdin.readline().split())):
    lo = -1
    hi = N
    while lo + 1 < hi:
        mid = (lo + hi) // 2
        if a > A[mid]: lo = mid
        else: hi = mid
    try:
        if a == A[hi]: print(1)
        else: print(0)
    except IndexError:
        print(0)
