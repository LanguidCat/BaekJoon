N, A, B, C, D = map(int, input().split())

X = 0
temp = N
while temp > 0:
    temp -= A
    X += B

temp = N
Y = 0
while temp > 0:
    temp -= C
    Y += D

print(min(X, Y))
