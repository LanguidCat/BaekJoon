A, B = input().split()

Amin = Bmin = Amax = Bmax = ""

for i in A:
    if i == '5' or i == '6':
        Amin += '5'
        Amax += '6'
    else:
        Amin += i
        Amax += i

for i in B:
    if i == '5' or i == '6':
        Bmin += '5'
        Bmax += '6'
    else:
        Bmin += i
        Bmax += i

print(int(Amin) + int(Bmin), int(Amax) + int(Bmax))
