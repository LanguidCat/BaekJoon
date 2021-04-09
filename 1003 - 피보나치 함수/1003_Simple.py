# 피보나치 수열 40개 만들기 
fib = [0, 1]
for i in range(2, 41):
    fib.append(fib[i-2] + fib[i-1])

for i in range(int(input())):
    t = int(input())
    if t == 0: 
        print("1 0")
    elif t == 1: 
        print("0 1")
    else: 
        # 0의 개수는 fib[t-1], 1의 개수는 fib[t]
        print(fib[t-1], fib[t])