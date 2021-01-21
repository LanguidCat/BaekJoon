import sys

for i in range(int(sys.stdin.readline())):
    a = int(sys.stdin.readline())
    if (a&(-a)) == a: print(1)
    else: print(0)
