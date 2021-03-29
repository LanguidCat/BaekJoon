import sys

N = int(sys.stdin.readline())

dots = 5
for i in range(N - 1):
    dots += 7 + 3 * i
print(dots % 45678)
