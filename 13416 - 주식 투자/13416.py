import sys


for i in range(int(sys.stdin.readline())):
    ans = 0
    for j in range(int(sys.stdin.readline())):
        A, B, C = map(int, sys.stdin.readline().split())
        if A < 0 and B < 0 and C < 0: continue
        else: ans += max(A, B, C)
    print(ans)
