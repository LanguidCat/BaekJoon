import sys

A, B = map(int, sys.stdin.readline().split())
C = int(sys.stdin.readline())

if A + B >= C * 2: print(A + B - C * 2)
else: print(A + B)
