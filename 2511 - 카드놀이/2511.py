import sys

cardA = [i for i in map(int, sys.stdin.readline().split())]
cardB = [i for i in map(int, sys.stdin.readline().split())]

A = 0
B = 0
lastWin = 'D'
for i in range(10):
    if cardA[i] > cardB[i]:
        A += 3
        lastWin = 'A'
    elif cardA[i] < cardB[i]:
        B += 3
        lastWin = 'B'
    else:
        A += 1
        B += 1

print(f"{A} {B}")
if A > B: print("A")
elif A < B: print("B")
else:
    if lastWin == 'A': print("A")
    elif lastWin == 'B': print("B")
    else: print("D")
