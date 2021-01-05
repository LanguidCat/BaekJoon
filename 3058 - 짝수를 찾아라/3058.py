import sys

T = int(sys.stdin.readline())

for i in range(T):
    test = [i for i in list(map(int, sys.stdin.readline().split())) if i % 2 == 0]
    test.sort()

    sum = 0
    for j in range(len(test)):
        sum += test[j]
    print(sum, test[0])
