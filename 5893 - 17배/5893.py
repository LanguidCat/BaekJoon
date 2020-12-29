N = input()

I = 0
for i in range(len(N)):
    I += int(N[len(N) - 1 - i]) * 2 ** i

I *= 17

B = []
while(I > 0):
    B.append(I % 2)
    I //= 2

for i in range(len(B)):
    print(B[len(B) - 1 - i], end = '')
