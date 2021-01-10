import sys

N, M = map(int, sys.stdin.readline().split())
h = list(map(int, sys.stdin.readline().split()))
a = list(map(int, sys.stdin.readline().split()))

max_h = max_a = 0
for i in range(N):
    if h[i] > max_h: max_h = h[i]
for i in range(M):
    if a[i] > max_a: max_a = a[i]

print(max_a + max_h)
