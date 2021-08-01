import sys

while(1):
    test = [i ** 2 for i in map(int, sys.stdin.readline().split())]
    test.sort()
    if test[0] + test[1] + test[2] == 0: break
    elif test[0] + test[1] == test[2]: print("right")
    else: print("wrong")
