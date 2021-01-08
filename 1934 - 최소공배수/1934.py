import sys

T = int(sys.stdin.readline())

for i in range(T):
    A, B = map(int, sys.stdin.readline().split())
    tmp = 1
    i = 2
    while(1):
        if A % i == 0 and B % i == 0:
            A /= i
            B /= i
            tmp *= i

        else: i += 1

        if i > A or i > B: break
    print(int(tmp * A * B))
