import sys

a = [i for i in map(int, sys.stdin.readline().split())]
a.sort()

print(a[2] * a[0])
