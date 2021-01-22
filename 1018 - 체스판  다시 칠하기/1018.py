Bf = [
    ['B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'],
    ['W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'],
    ['B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'],
    ['W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'],
    ['B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'],
    ['W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'],
    ['B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'],
    ['W', 'B', 'W', 'B', 'W', 'B', 'W', 'B']
]

Wf = [
    ['W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'],
    ['B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'],
    ['W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'],
    ['B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'],
    ['W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'],
    ['B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'],
    ['W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'],
    ['B', 'W', 'B', 'W', 'B', 'W', 'B', 'W']
]

def Bfirst(x, y):
    cnt = 0
    for i in range(8):
        for j in range(8):
            if Bf[i][j] != arr[x + i][y + j]:
                cnt += 1
    return cnt

def Wfirst(x, y):
    cnt = 0
    for i in range(8):
        for j in range(8):
            if Wf[i][j] != arr[x + i][y + j]:
                cnt += 1
    return cnt

N, M = map(int, input().split())
arr = [list(input()) for _ in range(N)]

ans = 64
i = j = 0
while i + 7 < N:
    while j + 7 < M:
        ans = min(ans, Bfirst(i, j), Wfirst(i, j))
        j += 1
    i += 1
    j = 0
print(ans)
