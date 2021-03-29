import sys

T = int(sys.stdin.readline())

for i in range(T):
    # H == 층수, W == 방수, N == 몇 번째 손님
    H, W, N = map(int, sys.stdin.readline().split())
    h = 0
    w = 1
    for i in range(N):
        if h == H:
            h = 0
            w += 1
        h += 1
    print(h * 100 + w)
