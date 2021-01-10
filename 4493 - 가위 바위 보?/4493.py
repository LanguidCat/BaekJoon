import sys

t = int(sys.stdin.readline())

for i in range(t):
    n = int(sys.stdin.readline())
    P1 = P2 = 0
    
    for j in range(n):
        a, b = sys.stdin.readline().split()
        if a == 'R' and b == 'S': P1 += 1
        elif a == 'S' and b == 'R': P2 += 1
        elif a == 'R' and b == 'P': P2 += 1
        elif a == 'P' and b == 'R': P1 += 1
        elif a == 'P' and b == 'S': P2 += 1
        elif a == 'S' and b == 'P': P1 += 1
    
    if P1 > P2: print("Player 1")
    elif P2 > P1: print("Player 2")
    else: print("TIE")
