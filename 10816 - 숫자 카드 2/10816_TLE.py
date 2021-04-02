# Python3: 30% TLE
# PyPy3: 73% TLE

import sys

# 이진 탐색을 통해 특정 요소를 찾는 함수 
def bin_search(m, lst, size):
    start = 0
    end = size - 1
    while start <= end:
        mid = (start + end) // 2
        if lst[mid] == m: 
            return bin_cnt(m, mid, lst, size)
        elif lst[mid] < m: start = mid + 1
        elif lst[mid] > m: end = mid - 1
        
    return 0


# 찾은 특정 요소의 위치에서 
# 좌우로 같은 요소의 개수를 찾는 함수
def bin_cnt(m, idx, lst, size):
    r = idx + 1
    l = idx - 1
    result = 1

    # 좌측 검색 
    while 0 <= l:
        if lst[l] == m:
            result += 1
            l -= 1
        else: 
            break

    # 우측 검색 
    while r < size:
        if lst[r] == m:
            result += 1
            r += 1
        else:
            break
        
    return result


# 입력이 최대 1,000,002번 들어올 수 있으므로
# sys.stdin.readline 사용하여 시간 최적화
N = int(sys.stdin.readline())
N_lst = list(map(int, sys.stdin.readline().split()))
M = int(sys.stdin.readline())
M_lst = list(map(int, sys.stdin.readline().split()))
# 이진탐색을 위한 정렬
N_lst.sort()

# 출력
for i in M_lst: 
    print(bin_search(i, N_lst, N), end = ' ')
print()
