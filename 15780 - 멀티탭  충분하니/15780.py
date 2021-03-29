import sys

N, K = map(int, sys.stdin.readline().split())
LST = list(map(int, sys.stdin.readline().split()))

P = 0
for i in range(K):
    if LST[i] == 3 or LST[i] == 4: P += 2
    elif LST[i] == 5 or LST[i] == 6: P += 3
    elif LST[i] == 7 or LST[i] == 8: P += 4

if P >= N: print("YES")
else: print("NO")
