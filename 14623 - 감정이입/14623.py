B1 = input()
B2 = input()

I1 = 0
for i in range(len(B1)):
    I1 += int(B1[len(B1) - 1 - i]) * 2 ** i

I2 = 0
for i in range(len(B2)):
    I2 += int(B2[len(B2) - 1 - i]) * 2 ** i

I = I1 * I2

temp = I
B = []
while(temp > 0):
    B.append(temp % 2)
    temp //= 2

for i in range(len(B)):
    print(B[len(B) - 1 - i], end = '')
