import sys

for i in range(int(sys.stdin.readline())):
    d = int(sys.stdin.readline())
    t = 0
    while t ** 2 + t <= d:
        t += 1
    print(t - 1)
