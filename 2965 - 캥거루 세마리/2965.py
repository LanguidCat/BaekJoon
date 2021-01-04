import sys

A, B, C = map(int, sys.stdin.readline().split())
print(max(B - A - 1, C - B - 1))
