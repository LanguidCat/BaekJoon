"""
예제 입력 1 
1 1
2 3
3 4
9 8
5 2
0 0
예제 출력 1 
2
5
7
17
7
"""
while True:
    a, b = map(int, input().split())
    if a == 0 and b == 0:
        break
    print(a+b)
    
