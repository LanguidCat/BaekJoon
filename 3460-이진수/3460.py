import sys

T = int(sys.stdin.readline())

for i in range(T):
    Bin = []
    n = int(sys.stdin.readline())
    while(n > 0):
        Bin.append(n % 2)
        n //= 2
    for j in range(len(Bin)):
        if Bin[j] == 1: print(j, end = ' ')
