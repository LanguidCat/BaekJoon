import sys

sum = 0
n = int(sys.stdin.readline())
for i in range(n):
    lst = list(map(int, sys.stdin.readline().split()))
    for j in range(n):
        sum += lst[j]
print(sum)
