import sys

# 이진탐색
def binary_search(arr, size, a):
    start = 0
    end = size - 1
    while start <= end:
        mid = (start + end) // 2
        if arr[mid] == a:
            return 1
        elif arr[mid] < a:
            start = mid + 1
        elif arr[mid] > a:
            end = mid - 1
    return 0


# 입력이 최대 2,000,002번 들어올 수 있으므로
# sys.stdin.readline 사용하여 시간 최적화
for i in range(int(sys.stdin.readline())):
    N = int(sys.stdin.readline())
    note1 = list(map(int, sys.stdin.readline().split()))
    M = int(sys.stdin.readline())
    note2 = list(map(int, sys.stdin.readline().split()))
    # 이진탐색을 위한 정렬
    note1.sort()
    for j in note2:
        print(binary_search(note1, N, j))