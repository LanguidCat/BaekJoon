import sys

N = int(sys.stdin.readline())
ans = 0
for A in range(2, N + 1, 2):
    for B in range(1, N - A + 1):
        for C in range(1, N - A - B + 1):
            if C >= B + 2 and A + B + C == N:
                ans += 1
print(ans)
