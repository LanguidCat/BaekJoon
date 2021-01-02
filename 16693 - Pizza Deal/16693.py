import sys

A1, P1 = map(int, sys.stdin.readline().split())
R1, P2 = map(int, sys.stdin.readline().split())

A = A1 * P2
R = R1 ** 2 * 3.14159265359 * P1
if A > R: print("Slice of pizza")
else: print("Whole pizza")
