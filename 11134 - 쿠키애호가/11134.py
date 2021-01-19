import sys

for i in range(int(sys.stdin.readline())):
    N, C = map(int, sys.stdin.readline().split())
    ans = N // C
    if N % C != 0: ans += 1
    print(ans)
