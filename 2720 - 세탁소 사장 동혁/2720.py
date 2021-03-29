import sys

T = int(sys.stdin.readline())

for i in range(T):
    Q = 0
    D = 0
    N = 0
    P = 0
    C = int(sys.stdin.readline())

    if C >= 25:
        Q += C // 25
        C %= 25
    if C >= 10:
        D += C // 10
        C %= 10
    if C >= 5:
        N += C // 5
        C %= 5
    P = C

    print(f"{Q} {D} {N} {P}")
