# Python3: 44% TLE
# PyPy3: AC

import sys

N, M = map(int, sys.stdin.readline().split())
arr = list(map(int, sys.stdin.readline().split()))

# 가능한 나무 높이의 범위에서 
# 자를 높이의 최댓값을 찾는 이진탐색 
start = 0
end = max(arr)
rslt = 0
while start <= end:
    mid = (start + end) // 2 
    # 나무 자르기
    cut_tree = 0
    for i in range(N):
        if arr[i] >= mid:
            cut_tree += arr[i] - mid
    # 길이 대조하기
    if cut_tree >= M:
        if rslt < mid:
            rslt = mid 
        start = mid + 1 
    else:
        end = mid - 1

print(rslt)