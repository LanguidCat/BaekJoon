"""
예제 입력 1 
1
예제 출력 1 
*
예제 입력 2 
2
예제 출력 2 
*
 *
*
 *
예제 입력 3 
3
예제 출력 3 
* *
 *
* *
 *
* *
 *
예제 입력 4 
4
예제 출력 4 
* *
 * *
* *
 * *
* *
 * *
* *
 * *
 """
 N = int(input())
if N==1: print('*')
elif N%2==0:
    for i in range(N):
        print('* ' * (N//2))
        print(' *' * (N//2))
else:
    for i in range(N):
        print('*' + ' *' * (N//2)) 
        print(' *' * (N//2))
