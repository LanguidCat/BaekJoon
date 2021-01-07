import sys

N = int(sys.stdin.readline())
if N == 1: print(sys.stdin.readline(), end = '')
else:
    B = list(map(int, sys.stdin.readline().split()))
    A = [B[0]]
    sum = B[0]
    for i in range(1, N):
        A.append(B[i] * (i + 1) - sum)
        sum += A[i]
    for i in range(N):
        print(A[i], end = ' ')
