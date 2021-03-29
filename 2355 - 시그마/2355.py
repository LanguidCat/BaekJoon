import sys

A, B = map(int, sys.stdin.readline().split())

print(int((A + B) * (abs(A - B) + 1) / 2))
