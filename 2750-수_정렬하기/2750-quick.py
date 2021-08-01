# Quick Sort
# Python3로 제출 시 Recursion Error(Runtime Error) 발생
# PyPy3로 제출 시 정답 

# 입력
arr = []
N = int(input())
for i in range(N): arr.append(int(input()))

# 정렬
def quick_sort(arr, start, end):
    # base case: 탐색범위가 엇갈리는 경우 
    if start >= end: return

    # pivot은 항상 배열의 첫 요소
    pivot = start
    i = start + 1
    j = end

    while i <= j:
        # i는 왼쪽에서 오른쪽으로 탐색, pivot보다 큰 값을 찾는다
        while i <= end and arr[i] <= arr[pivot]: i += 1
        # j는 오른쪽에서 왼쪽으로 탐색, pivot보다 작은 값을 찾는다
        while j > start and arr[j] >= arr[pivot]: j -= 1

        if i > j: arr[j], arr[pivot] = arr[pivot], arr[j]
        else: arr[i], arr[j] = arr[j], arr[i]
    
    # pivot은 j의 자리에 오게 되고, 좌우 배열로 분할 정복한다 
    quick_sort(arr, start, j-1)
    quick_sort(arr, j+1, end)


quick_sort(arr, 0, N-1)

# 출력
for i in range(N): print(arr[i])
