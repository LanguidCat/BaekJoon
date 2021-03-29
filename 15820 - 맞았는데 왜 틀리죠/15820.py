import sys

s1, s2 = map(int, sys.stdin.readline().split())
sample = system = 0

for i in range(s1):
    a, b = map(int, sys.stdin.readline().split())
    if a != b: sample = -1

if sample == -1: print("Wrong Answer")
else:
    for i in range(s2):
        a, b = map(int, sys.stdin.readline().split())
        if a != b: system = -1
    if system == -1: print("Why Wrong!!!")
    else: print("Accepted")
