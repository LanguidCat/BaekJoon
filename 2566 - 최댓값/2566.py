import sys

T = [list(map(int, sys.stdin.readline().split())) for _ in range(9)]

M = 0
for i in range(9):
    for j in range(9):
        if T[i][j] > M: M = T[i][j]

for i in range(9):
    for j in range(9):
        if T[i][j] == M:
            print(M)
            print(i + 1, j + 1)
            break
