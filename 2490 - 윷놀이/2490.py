import sys

for i in range(3):
    a = [i for i in map(int, sys.stdin.readline().split())]
    zero = a.count(0)
    one = a.count(1)

    # 배 == 0 등 == 1 
    if zero == 1 and one == 3: print('A')
    elif zero == 2 and one == 2: print('B')
    elif zero == 3 and one == 1: print('C')
    elif zero == 4 and one == 0: print('D')
    else: print('E')
