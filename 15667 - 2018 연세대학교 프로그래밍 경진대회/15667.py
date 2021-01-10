import sys

N = int(sys.stdin.readline())

K = 0
while K ** 2 + K + 1 != N: K += 1
print(K)
