import sys

cups = [1, 0, 0]
shake = list(sys.stdin.readline())

for i in range(len(shake)):
    if shake[i] == 'A':
        tmp = cups[0]
        cups[0] = cups[1]
        cups[1] = tmp
    elif shake[i] == 'B':
        tmp = cups[1]
        cups[1] = cups[2]
        cups[2] = tmp
    elif shake[i] == 'C':
        tmp = cups[0]
        cups[0] = cups[2]
        cups[2] = tmp

print(cups.index(1) + 1)
