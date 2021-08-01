import sys

n, h, v = map(int, sys.stdin.readline().split())

A = h * v
B = (n - h) * v
C = h * (n - v)
D = (n - h) * (n - v)

print(max(A, B, C, D) * 4)
