def han(n):
    if n < 100: return n
    else:
        rslt = 0
        for i in range(100, n + 1):
            hnd = i // 100
            ten = (i % 100) // 10
            one = i % 10
            if (hnd - ten) == (ten - one): rslt += 1
        
        return rslt + 99  # 세 자릿수 미만의 한수는 99개 

n = int(input())
print(han(n))
