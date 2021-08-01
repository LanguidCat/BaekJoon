import sys

n = int(sys.stdin.readline())

chang = 100
sang = 100
for i in range(n):
    C, S = map(int, sys.stdin.readline().split())
    if C > S: sang -= C
    elif S > C: chang -= S
print(chang)
print(sang)
