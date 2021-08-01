import sys

while True:
    a, b, c = map(int, sys.stdin.readline().split())
    if a == 0 and b == 0 and c == 0: break

    if b - a == c - b:
        ad = c + b - a
        print(f"AP {ad}")
    elif b / a == c / b:
        ar = int(c * (b / a))
        print(f"GP {ar}")
