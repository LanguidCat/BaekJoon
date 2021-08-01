# Bubble Sort

# 입력
arr = []
N = int(input())
for i in range(N): arr.append(int(input()))

# 정렬
for i in range(N):
    for j in range(N-1-i):
        if arr[j] > arr[j+1]: arr[j], arr[j+1] = arr[j+1], arr[j]

# 출력
for i in range(N): print(arr[i])
