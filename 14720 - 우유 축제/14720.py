# 딸기0 - 초코1 - 바나나2 - 딸기0 - ...

import sys

N = int(sys.stdin.readline())
LST = list(map(int, sys.stdin.readline().split()))

D = Milk = 0
for i in range(N):
    if LST[i] == 0 and Milk == 0:
        D += 1
        Milk = 1
    elif LST[i] == 1 and Milk == 1:
        D += 1
        Milk = 2
    elif LST[i] == 2 and Milk == 2:
        D += 1
        Milk = 0

print(D)
