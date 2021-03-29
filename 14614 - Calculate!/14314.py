import sys

a, b, c = sys.stdin.readline().split()
if int(c[-1]) % 2 == 0: print(a)
else: print(int(a) ^ int(b))
