import sys

K = int(sys.stdin.readline())

time = 0
for i in range(int(sys.stdin.readline())):
    TZ = sys.stdin.readline().split()
    time += int(TZ[0])
    Z = TZ[1]

    if time >= 210: break
    if Z == 'T' : K += 1
    if K == 9: K = 1
print(K)
