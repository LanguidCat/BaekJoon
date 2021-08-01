import sys

T = int(sys.stdin.readline())

for i in range(T):
    A, B, C, D, E = map(int, sys.stdin.readline().split())
    sum = A * 350.34 + B * 230.90 + C * 190.55 + D * 125.30 + E * 180.90
    print(f"${sum:0.2f}")
