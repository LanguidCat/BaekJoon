import sys

# 이진 탐색을 통해 특정 요소를 찾는 함수 
def bin_search(m, lst):
    start = 0
    end = len(lst) - 1
    while start <= end:
        mid = (start + end) // 2
        if lst[mid] == m: 
            return bin_cnt(m, mid, lst)
        elif lst[mid] < m: start = mid + 1
        elif lst[mid] > m: end = mid - 1
        
    return 0


# 찾은 특정 요소의 위치에서 
# 좌우로 같은 요소의 개수를 찾는 함수
def bin_cnt(m, idx, lst):
    r = idx + 1
    l = idx - 1
    result = 1
    break_1 = break_2 = False
    while 0 <= l and r < len(lst):
        if lst[r] == m:
            result += 1
            r += 1
        else:
            break_1 = True

        if lst[l] == m:
            result += 1
            l -= 1
        else:
            break_2 = True

        if break_1 == True and break_2 == True: 
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
    print(bin_search(i, N_lst), end = ' ')
print()
