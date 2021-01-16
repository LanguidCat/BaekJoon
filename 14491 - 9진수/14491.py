import sys

T = int(sys.stdin.readline())
RSLT = ""
while T > 0:
    tmp = T % 9
    T //= 9
    RSLT = str(tmp) + RSLT
print(RSLT)
