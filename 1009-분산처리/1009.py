import sys

T = int(sys.stdin.readline())
t = [[2, 4, 8, 6], [3, 9, 7, 1], [4, 6], [7, 9, 3, 1], [8, 4, 2, 6], [9, 1]]


for i in range(T):
    a, b = map(int, sys.stdin.readline().split())
    A = str(a)[-1]
    
    if A == '0': print(10)
    elif A == '1': print(1)
    elif A == '2': print(t[0][b % 4 - 1])
    elif A == '3': print(t[1][b % 4 - 1])
    elif A == '4': print(t[2][b % 2 - 1])
    elif A == '5': print(5)
    elif A == '6': print(6)
    elif A == '7': print(t[3][b % 4 - 1])
    elif A == '8': print(t[4][b % 4 - 1])
    elif A == '9': print(t[5][b % 2 - 1])
