import sys

for i in range(int(sys.stdin.readline())):
    n, m = map(int, sys.stdin.readline().split())

    idx = 0
    for a in range(1, n):
        for b in range(a + 1, n):
            if (a ** 2 + b ** 2 + m) / (a * b) % 1 == 0:
                idx += 1
    print(idx)
