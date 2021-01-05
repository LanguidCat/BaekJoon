import sys

T = int(sys.stdin.readline())

for i in range(T):
    Y = 0
    K = 0
    for j in range(9):
        y, k = map(int, sys.stdin.readline().split())
        Y += y
        K += k
    if Y > K: print("Yonsei")
    elif K > Y: print("Korea")
    else: print("Draw")
