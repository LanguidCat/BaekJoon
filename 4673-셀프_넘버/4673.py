def d(n): #n과 n의 각 자리수를 더하는 함수
    if n//10 == 0: #n이 한 자리 숫자일 경우
        return (n+n)
    else:
        l1 = str(n)
        s = 0
        for i in range(len(l1)):
            s += int(l1[i])
        return (n+s)
l2 = []
for i in range(1, 10001):
    l2.append(d(i))
for i in range(1, 10001):
    if i not in l2: print(i)
    else: continue
