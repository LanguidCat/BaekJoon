import sys

n = int(sys.stdin.readline())
tmp = 1
idx = sum = 0
while True:
    tmp += 4 * idx
    idx += 1
    n -= tmp
    if n == 0: break
    elif n < 0:
        idx -= 1
        break
print(idx)
