import sys

n = int(sys.stdin.readline())
LST = list(map(int, sys.stdin.readline().split()))
RSLT = []

if n == 2:
    for i in range(1, LST[0] + 1):
        if LST[0] % i == 0 and LST[1] % i == 0: RSLT.append(i)
else:
    for i in range(1, LST[0] + 1):
        if LST[0] % i == 0 and LST[1] % i == 0 and LST[2] % i == 0: RSLT.append(i)

for i in range(len(RSLT)):
    print(RSLT[i])
