import sys

ao, ai = map(int, sys.stdin.readline().split())
bo, bi = map(int, sys.stdin.readline().split())
co, ci = map(int, sys.stdin.readline().split())
do, di = map(int, sys.stdin.readline().split())

A = ai
B = A - bo + bi
C = B - co + ci
D = C - do + di

print(max(A, B, C, D))
