import sys

N = int(sys.stdin.readline())

idx = 0
for B in range(1, 501):
    for A in range(B, 501 - B):
        if A ** 2 - B ** 2 == N: idx += 1
print(idx)
