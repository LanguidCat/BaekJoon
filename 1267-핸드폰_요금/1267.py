import sys

N = int(sys.stdin.readline())
time = list(map(int, sys.stdin.readline().split()))
Y = 0
M = 0
for i in range(N):
    Y += (time[i] // 30 + 1) * 10
    M += (time[i] // 60 + 1) * 15

if Y < M: print("Y", Y)
elif M < Y: print("M", M)
else: print("Y M", Y)
