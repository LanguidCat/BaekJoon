import sys

while True:
    a, b = map(int, sys.stdin.readline().split())
    if a == 0 and b == 0: break

    if a // b > 0:
        A = a // b
        B = a % b
        print(f"{A} {B} / {b}")
    else: print(f"0 {a} / {b}")
