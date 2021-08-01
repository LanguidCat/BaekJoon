import sys

LST = list(map(int, sys.stdin.readline().split()))
LST.sort()

if LST[1] - LST[0] == LST[2] - LST[1]: print(LST[2] + (LST[2] - LST[1]))
elif LST[1] - LST[0] > LST[2] - LST[1]: print(LST[0] + (LST[2] - LST[1]))
elif LST[1] - LST[0] < LST[2] - LST[1]: print(LST[1] + (LST[1] - LST[0]))
