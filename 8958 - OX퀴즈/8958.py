N = int(input())
for i in range(N):
    scr = 0
    cot = 0
    OX = input()
    for j in range(len(OX)):
        if OX[j] == 'O':
            scr+=1
            if cot != 0: scr+=cot
            cot+=1
        else: cot=0
    print(scr)
