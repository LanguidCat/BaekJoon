import sys

def bins(arr, m):
    # arr안에 m이 있는지 이진탐색으로 확인
    start = 0
    end = len(arr) - 1
    
    while start <= end:
        mid = (start + end) // 2
        if arr[mid] == m: return 1
        elif arr[mid] > m: end = mid - 1
        elif arr[mid] < m: start = mid + 1
    return 0

# 입력값이 최대 100,000개씩 들어올 수 있으므로
# sys 사용하여 입력 수행시간 개선 
N = int(sys.stdin.readline())
N_arr = list(map(int, sys.stdin.readline().split()))
M = int(sys.stdin.readline())
M_arr = list(map(int, sys.stdin.readline().split()))
# 이진탐색을 위한 정렬
N_arr.sort()

# 결과 출력
for i in range(M): print(bins(N_arr, M_arr[i]))