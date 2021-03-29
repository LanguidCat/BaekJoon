import sys

T = int(sys.stdin.readline())

for i in range(T):
    test = sys.stdin.readline().split()
    if type(test[0]) == "<class 'int'>":
        t = int(test[0])
    else: t = float(test[0])
    
    for j in range(1, len(test)):
        if test[j] == '@': t *= 3
        elif test[j] == '%': t += 5
        else: t -= 7
    
    print("%0.2f" % t)
