import sys

for i in range(int(sys.stdin.readline())):
    sum = 0
    for j in range(1, int(sys.stdin.readline()) + 1):
        if j % 2 == 1: sum += j
    print(sum)
