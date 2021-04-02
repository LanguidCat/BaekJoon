import sys

# 찾고자 하는 값이 처음 등장하는 위치 반환
def lower_bound(m, lst, size):
    start = 0
    end = size - 1

    while end > start:
        mid = (start + end) // 2
        if lst[mid] >= m: end = mid
        else: start = mid + 1
    
    return end



# 찾고자 하는 값보다 큰 값이 처음 등장하는 위치 반환
def upper_bound(m, lst, size):
    start = 0
    end = size - 1

    while end > start:
        mid = (start + end) // 2
        if lst[mid] > m: end = mid
        else: start = mid + 1
    
    return end


# 입력이 최대 1,000,002번 들어올 수 있으므로
# sys.stdin.readline 사용하여 시간 최적화
N = int(sys.stdin.readline())
N_lst = list(map(int, sys.stdin.readline().split()))
M = int(sys.stdin.readline())
M_lst = list(map(int, sys.stdin.readline().split()))
# 이진탐색을 위한 정렬
N_lst.sort()

# 출력
# N이 1일때 예외처리 
if N == 1:
    for i in M_lst: 
        if N_lst[0] == i: 
            print("1", end=' ')
        else: 
            print("0", end=' ')
    print()
else:
    for i in M_lst: 
        Upper = upper_bound(i, N_lst, N)
        Lower = lower_bound(i, N_lst, N)
        # Upper가 배열의 마지막일 경우 
        if Upper == N-1 and N_lst[N-1] == i:
            Upper += 1
        print(Upper-Lower, end=' ')
    print()
