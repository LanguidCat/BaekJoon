import sys

def gcd(a, b):
    while True:
        c = a % b
        if c == 0: return b
        a = b
        b = c

for i in range(int(sys.stdin.readline())):
    lst = list(map(int, sys.stdin.readline().split()))
    Sum = 0;
    for j in range(1, lst[0]):
        for k in range(j + 1, lst[0] + 1):
            Sum += gcd(max(lst[j], lst[k]), min(lst[j], lst[k]))
    print(Sum)
