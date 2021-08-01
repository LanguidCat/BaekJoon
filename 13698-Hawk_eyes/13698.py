import sys

Cups = [1, 0, 0, 2]
LST = list(sys.stdin.readline())

for i in LST:
    if i == 'A': Cups[0], Cups[1] = Cups[1], Cups[0]
    elif i == 'B': Cups[0], Cups[2] = Cups[2], Cups[0]
    elif i == 'C': Cups[0], Cups[3] = Cups[3], Cups[0]
    elif i == 'D': Cups[1], Cups[2] = Cups[2], Cups[1]
    elif i == 'E': Cups[1], Cups[3] = Cups[3], Cups[1]
    elif i == 'F': Cups[2], Cups[3] = Cups[3], Cups[2]

print(Cups.index(1) + 1)
print(Cups.index(2) + 1)
