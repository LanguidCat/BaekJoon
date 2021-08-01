"""
예제 입력 1 
3
예제 출력 1 
*
**
***
**
*
"""
N = int(input())
for i in range(1, N+1):
    print("*" * i)
for i in range(1, N):
    print("*" * (N - i))
