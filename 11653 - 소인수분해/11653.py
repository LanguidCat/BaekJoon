import sys

N = int(sys.stdin.readline())

if N != 1:
    R = []
    i = 2
    while(N > 1):
        if N % i == 0:
            print(i)
            N /= i
        else: i += 1
