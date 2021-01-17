import sys

idx = 0
while True:
    n = int(sys.stdin.readline())
    if n == 0: break
    idx += 1

    a = n * 3
    if a % 2 == 0:
        a //= 2
        mark = 2
    else:
        a = (a + 1) // 2
        mark = 1
    a *= 3
    a //= 9
    
    if mark == 2: print(f"{idx}. even {a}")
    elif mark == 1: print(f"{idx}. odd {a}")
