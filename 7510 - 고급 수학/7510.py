import sys

idx = 0
for i in range(int(sys.stdin.readline())):
    LST = list(map(int, sys.stdin.readline().split()))
    LST.sort()
    idx += 1
    if LST[2] ** 2 == LST[1] ** 2 + LST[0] ** 2: print(f"Scenario #{idx}: \nyes")
    else: print(f"Scenario #{idx}: \nno")
    print()
