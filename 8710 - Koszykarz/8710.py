import sys

k, w, m = map(int, sys.stdin.readline().split())

idx = 0
tmp = w - k
while tmp > 0:
    tmp -= m
    idx += 1

print(idx)
