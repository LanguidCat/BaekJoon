A, B, C = map(int, input().split())

login = 0
idx = 0
while(C > 0):
    login += 1
    idx += 1
    C -= A
    if idx == 7:
        C -= B
        idx = 0
print(login)
