import sys

N = int(sys.stdin.readline())
# 문제가 맞으면 1, 틀리면 0
T = list(map(int, sys.stdin.readline().split()))

score = 0
tmp = 0
for i in range(N):
    if T[i] == 1:
        tmp += 1
        score += tmp
    else:
        tmp = 0
print(score)
