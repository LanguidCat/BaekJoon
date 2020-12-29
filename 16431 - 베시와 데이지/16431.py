Br, Bc = map(int, input().split())
Dr, Dc = map(int, input().split())
Jr, Jc = map(int, input().split())

temp = abs(Jr - Br) + abs(Jc - Bc)
B = temp // 2 + temp % 2
D = abs(Jr - Dr) + abs(Jc - Dc)

if B < D: print('bessie')
elif D < B: print('daisy')
else: print('tie')
