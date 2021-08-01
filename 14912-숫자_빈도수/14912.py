import sys

n, d = map(int, sys.stdin.readline().split())
ans = 0
for i in range(1, n + 1):
    a = i
    while a:
        if a % 10 == d: ans += 1
        a //= 10
print(ans)
