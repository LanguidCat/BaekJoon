# Selection Sort

# 입력
arr = []
N = int(input())
for i in range(N): arr.append(int(input()))

# 정렬
for i in range(N):
    min_ = 1001
    for j in range(i, N):
        if arr[j] < min_: 
            min_ = arr[j]
            idx = j
    arr[i], arr[idx] = arr[idx], arr[i]

# 출력
for i in range(N): print(arr[i])
