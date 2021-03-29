import sys

N = int(sys.stdin.readline())

up = 0
down = 0
sum = 0
while up < N or down < N:
    sum += up + down
    if down > up: up += 1
    else:
        up = 0
        down += 1
sum += N * 2

print(sum)
