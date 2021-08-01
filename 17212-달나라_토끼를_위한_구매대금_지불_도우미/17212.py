import sys

# 파이썬의 재귀 깊이 제한 해결하기 
sys.setrecursionlimit(10**5)
dp = [0] * 100001


def rabbit(n, i):
    if n < 0:
        return 100001
    
    if n == 0:
        return i
    
    # Memoization
    if dp[n] != 0:
        return dp[n]
    
    # 7, 5, 2, 1 시작에서 가장 작은 동전 개수 리턴하기
    a = rabbit(n-7, i+1)
    b = rabbit(n-5, i+1)
    c = rabbit(n-2, i+1)
    d = rabbit(n-1, i+1)
    dp[n] = min(a, b, c, d)
    return dp[n]


N = int(input())
if N == 0:
    print(0)
else:
    print(rabbit(N, 0))
