"""
예제 입력 1 
5
예제 출력 1 
*****
 ****
  ***
   **
    *
"""

N = int(input())
for i in range(N): print(' ' * i + '*' * (N-i))
