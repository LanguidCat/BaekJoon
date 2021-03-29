import sys

n, T = map(int, sys.stdin.readline().split())
LST = list(map(int, sys.stdin.readline().split()))

task = 0
time = 0
for i in range(n):
    if time + LST[i] <= T:
        time += LST[i]
        task += 1
    else: break
print(task)
