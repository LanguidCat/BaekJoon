import sys

n = int(sys.stdin.readline())
LST = []
for i in range(1, n + 1):
    if n % i == 0: LST.append(i)
result = sum(LST) * 5 - 24
print(result)
