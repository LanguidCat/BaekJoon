import sys

a = 0
b = 0
for i in range(int(sys.stdin.readline())):
    A, B = map(int, sys.stdin.readline().split())
    if A > B: a += 1
    elif B > A: b += 1
print(a, b)
