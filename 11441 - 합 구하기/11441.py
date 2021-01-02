import sys

N = int(sys.stdin.readline())

# 부분합 배열 만들기
test = list(map(int, sys.stdin.readline().split()))
test.insert(0, 0)
for i in range(1, N + 1):
    test[i] += test[i - 1]

# 구간의 합 구하기
M = int(sys.stdin.readline())
for i in range(M):
    I, J = map(int, sys.stdin.readline().split())
    print(test[J] - test[I - 1])
