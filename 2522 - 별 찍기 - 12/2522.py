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
n = int(input())
for i in range(n):
    print(' ' * (n-1-i) + '*' * (i+1))
for i in range(n-1):
    print(' ' * (i+1) + '*' * (n-1-i))
