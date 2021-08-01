def plus(p): 
    if p <= 9: sp = "0" + str(p) # 앞자리에 0을 붙인다 
    else : sp = str(p)
    a = int(sp[0]) + int(sp[1]) #sp의 각 자리수의 합
    if a <= 9: sa = str(a)[0] 
    else: sa = str(a)[1]
    result = sp[1] + sa
    return int(result)

n = int(input())
first_n = n # 초기값의 저장
cycle = 0
r = 0

while True:
    cycle += 1
    r = plus(n)
    if r == first_n: break # 초기값으로 돌아온다면 반복문 탈출
    else: n = r

print(cycle)
