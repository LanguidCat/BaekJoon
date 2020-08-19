H, M = map(int, input().split())
M = M - 45
if M < 0:
    H = H - 1
    M = 60 - abs(M)
if H < 0: H = 24 - abs(H)

result = "%d %d" %(H, M)
print(result)
