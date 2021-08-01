import sys

A, B = map(int, sys.stdin.readline().split())

A -= 1
B -= 1

Ax = A // 4
Ay = A % 4
Bx = B // 4
By = B % 4

print(abs(Bx - Ax) + abs(By - Ay))
