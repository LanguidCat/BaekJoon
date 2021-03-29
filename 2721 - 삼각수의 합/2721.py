import sys

def T(n):
    ans = 0
    while n:
        ans += n
        n -= 1
    return ans

for i in range(int(sys.stdin.readline())):
    n = int(sys.stdin.readline())
    ans = 0
    for j in range(1, n + 1):
        ans += j * T(j + 1)
    print(ans)
