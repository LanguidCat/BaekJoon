LST = list(input())
REV = LST[:]
REV.reverse()

idx = 0
for i in range(len(LST)):
    if LST[i] == REV[i]: idx += 1
    else: break

if idx == len(LST): print(1)
else: print(0)
