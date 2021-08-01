# Insertion Sort

# 입력
arr = []
N = int(input())
for i in range(N): arr.append(int(input()))

# 정렬
for i in range(1, N):
    for j in range(i, 0, -1):
        if arr[j-1] > arr[j]: arr[j-1], arr[j] = arr[j], arr[j-1]

# 출력
for i in range(N): print(arr[i])
