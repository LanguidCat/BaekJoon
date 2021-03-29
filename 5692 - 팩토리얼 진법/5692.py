import sys

def fac(n):
    ans = 1
    while n:
        ans *= n
        n -= 1
    return ans

while True:
    N = int(sys.stdin.readline())
    if N == 0: break
    
    ans = 0
    i = 1
    while N:
        ans += (N % 10) * fac(i)
        i += 1
        N //= 10
    print(ans)
