import sys

N = int(sys.stdin.readline())

for i in range(31):
    if N == 2 ** i:
        print(1)
        break
    elif N < 2 ** i:
        print(0)
        break
