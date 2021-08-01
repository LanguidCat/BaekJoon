import sys

T = int(sys.stdin.readline())

for i in range(T):
    stat = list(map(int, sys.stdin.readline().split()))
    HP = stat[0] + stat[4]
    MP = stat[1] + stat[5]
    SP = stat[2] + stat[6]
    DP = stat[3] + stat[7]

    if HP < 1: HP = 1
    if MP < 1: MP = 1
    if SP < 0: SP = 0

    print(HP + MP * 5 + SP * 2 + DP * 2)
