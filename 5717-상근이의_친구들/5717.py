import sys

while 1:
    m, w = map(int, sys.stdin.readline().split())
    if m == 0 and w == 0: break
    print(m + w)
