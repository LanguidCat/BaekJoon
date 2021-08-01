# DP를 활용해 피보나치 수열 구현 
dp = [0] * 41
dp[1] = 1


def fib(n):
    if n <= 0:
        return 0
    elif n == 1:
        return 1
    
    # Memoization: 이미 구한 값은 다시 구하지 않는다
    if dp[n] != 0:
        return dp[n]
    else:
        dp[n] = fib(n-1) + fib(n-2)
        return dp[n]


for i in range(int(input())):
    t = int(input())
    if t == 0: 
        print("1 0")
    elif t == 1: 
        print("0 1")
    else: 
        print(fib(t-1), fib(t))