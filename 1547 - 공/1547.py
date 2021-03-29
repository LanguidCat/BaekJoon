import sys

M = int(sys.stdin.readline())
cups = [1, 2, 3]

for i in range(M):
    a, b = map(int, sys.stdin.readline().split())
    iA = cups.index(a)
    iB = cups.index(b)
    tmp = cups[iA]
    cups[iA] = cups[iB]
    cups[iB] = tmp
print(cups[0])
