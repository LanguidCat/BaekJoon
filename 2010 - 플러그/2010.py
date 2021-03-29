import sys

N = int(sys.stdin.readline())
computer = 0
for i in range(N):
    n = int(sys.stdin.readline())
    computer += n
    if N > i + 1: computer -= 1
print(computer) 
