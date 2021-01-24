import sys

idx = 0
while True:
    a, b, c = map(int, sys.stdin.readline().split())
    if (a, b, c) == (0, 0, 0): break
    idx += 1
    print(f"Triangle #{idx}")
    if a == -1:
        if c ** 2 - b ** 2 > 0:
            print(f"a = {(c ** 2 - b ** 2) ** 0.5:.3f}")
        else: print("Impossible.")
    elif b == -1:
        if c ** 2 - a ** 2 > 0:
            print(f"b = {(c ** 2 - a ** 2) ** 0.5:.3f}")
        else: print("Impossible.")
    elif c == -1:
        print(f"c = {(a ** 2 + b ** 2) ** 0.5:.3f}")
    print()
