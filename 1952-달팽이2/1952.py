import sys

M, N = map(int, sys.stdin.readline().split())
Array = [[1] * (M + 2)] + [[1] + [0] * M + [1] for _ in range(N)] + [[1] * (M + 2)]

i = j = 1
idx = 0
way = 'r'
while True:
    Array[i][j] = 1
    if Array[i + 1][j] == 1 and Array[i][j + 1] == 1 and Array[i - 1][j] == 1 and Array[i][j - 1] == 1:
            break
    
    elif way == 'r':
        if Array[i + 1][j] == 0: i += 1
        else:
            way = 'd'
            j += 1
            idx += 1
    
    elif way == 'd':
        if Array[i][j + 1] == 0: j += 1
        else:
            way = 'l'
            i -= 1
            idx += 1
    
    elif way == 'l':
        if Array[i - 1][j] == 0: i -= 1
        else:
            way = 'u'
            j -= 1
            idx += 1
    
    elif way == 'u':
        if Array[i][j - 1] == 0: j -= 1
        else:
            way = 'r'
            i += 1
            idx += 1

print(idx)
