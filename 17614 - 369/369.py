import sys

claps = 0
for i in range(1, int(sys.stdin.readline()) + 1):
    N = str(i)
    for j in N:
        if j == '3' or j == '6' or j == '9': claps += 1
print(claps)
