a = 1
while a <= 100:
    a += 1
    b = c = d = 0
    flag = 0
    for i in range(2, a + 1):
        b = i
        for j in range(i + 1, a + 1):
            c = j
            for k in range(j + 1, a + 1):
                d = k
                if a ** 3 == b ** 3 + c ** 3 + d ** 3:
                    print(f"Cube = {a}, Triple = ({b},{c},{d})")
