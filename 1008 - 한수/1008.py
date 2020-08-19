def Han_test(n):
    if n//100 == 0: return 1 # 두 자릿수는 항상 한수 
    elif n==1000: return 0 # 최댓값 1000은 항상 한수가 아님
    else: # 한수의 검증
        N = str(n) # 입력값을 str형으로 변환
        a = int(N[0]) 
        b = int(N[1])
        c = int(N[2])
        if (b-a) == (c-b): return 1 # 두 공차가 동일하면 한수 
        else: return 0 # 이외엔 한수가 아님
N = int(input())
count = 0
for i in range(1, N+1):
    s = Han_test(i)
    if s: count += 1 # 한수의 개수 세기
    else: continue
print(count)
