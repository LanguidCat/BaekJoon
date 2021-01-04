import sys

# N == 여학생, M == 남학생, K == 인턴쉽
N, M, K = map(int, sys.stdin.readline().split())

team = 0
while(1):
    N -= 2
    M -= 1
    sum = N + M - K
    if N < 0 or M < 0 or sum < 0 : break
    team += 1

print(team)
