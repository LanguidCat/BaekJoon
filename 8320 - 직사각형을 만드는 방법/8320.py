import sys

n = int(sys.stdin.readline())
s = 0

for i in range(1, n + 1):
    j = i
    while(i * j <= n):
        j += 1
        s += 1
print(s)
