import sys

a1, a2 = map(int, sys.stdin.readline().split())
b1, b2 = map(int, sys.stdin.readline().split())

while a2 > 0 and b2 > 0:
    a2 -= b1
    b2 -= a1
    if a2 <= 0 and b2 <=0: print("DRAW")
    elif a2 <= 0: print("PLAYER B")
    elif b2 <= 0: print("PLAYER A")
