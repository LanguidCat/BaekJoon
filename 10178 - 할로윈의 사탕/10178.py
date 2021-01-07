import sys

t = int(sys.stdin.readline())

for i in range(t):
    c, v = map(int, sys.stdin.readline().split())
    g = c // v
    d = c % v
    print(f"You get {g} piece(s) and your dad gets {d} piece(s).")
