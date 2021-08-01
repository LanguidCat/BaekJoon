import sys

T = int(sys.stdin.readline())

for i in range(T):
    sum = 0
    a, b = map(int, sys.stdin.readline().split())
    if a == 0: pass
    elif a == 1: sum += 5000000
    elif a <= 3: sum += 3000000
    elif a <= 6: sum += 2000000
    elif a <= 10: sum += 500000
    elif a <= 15: sum += 300000
    elif a <= 21: sum += 100000

    if b == 0: pass
    elif b == 1: sum += 5120000
    elif b <= 3: sum += 2560000
    elif b <= 7: sum += 1280000
    elif b <= 15: sum += 640000
    elif b <= 31: sum += 320000

    print(sum)
