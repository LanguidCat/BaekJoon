import sys

test = list(map(int, sys.stdin.readline().split()))
test.sort()
print(test[1] + test[2])
