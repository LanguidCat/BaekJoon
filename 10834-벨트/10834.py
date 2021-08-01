import sys

M = int(sys.stdin.readline())

A = B = 1
for i in range(M):
    a, b, s = map(int, sys.stdin.readline().split())

    B = B / a * b
    if s == 1: A *= -1

if A == 1: A = 0
elif A == -1: A = 1

print(A, int(B))
