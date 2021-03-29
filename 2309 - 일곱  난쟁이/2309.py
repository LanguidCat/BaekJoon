import sys

# 입력
LST = []
for i in range(9):
    n = int(sys.stdin.readline())
    LST.append(n)

# 두 가짜 찾기
N = sum(LST) - 100 # 40
a = b = 0
flag = 0
for i in range(8):
    for j in range(1, 9 - i):
        if N == LST[i] + LST[i + j]:
            a, b = LST[i], LST[i + j]
            flag = 1
            break
    if flag == 1: break

# 가짜 없애고 출력하기
LST.remove(a)
LST.remove(b)
LST.sort()
for i in LST: print(i)
