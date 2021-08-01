import sys

A, B = map(int, sys.stdin.readline().split())
C, D = map(int, sys.stdin.readline().split())

a = A / C + B / D
b = C / D + A / B
c = D / B + C / A
d = B / A + D / C

r = max(a, b, c, d)
if r == a: print(0)
elif r == b: print(1)
elif r == c: print(2)
elif r == d: print(3)
