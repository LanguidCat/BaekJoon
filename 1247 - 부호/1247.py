import sys

for i in range(3):
    sum = 0
    for j in range(int(sys.stdin.readline())):
        a = int(sys.stdin.readline())
        sum += a
    if sum > 0: print('+')
    elif sum == 0: print('0')
    else: print('-')
