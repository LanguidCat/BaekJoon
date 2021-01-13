import sys

H1, M1, S1 = map(int, sys.stdin.readline().split(':'))
H2, M2, S2 = map(int, sys.stdin.readline().split(':'))

# 시간 계산 
H = H2 - H1
M = M2 - M1
S = S2 - S1

if S < 0:
    M -= 1
    S = 60 + S

if M < 0:
    H -= 1
    M = 60 + M

if H < 0: H = 24 + H

# 출력
if H == 0 and M == 0 and S == 0: print('24', '00', '00', sep = ':')

else: print(f"{H:0>2}:{M:0>2}:{S:0>2}")
