import sys

n = int(sys.stdin.readline())
arr = list(map(int, sys.stdin.readline().split()))
m = int(sys.stdin.readline())
arr.sort()

for i in list(map(int, sys.stdin.readline().split())):
    start = 0
    end = n - 1
    flag = 0
    while start <= end:
        mid = (start + end) // 2
        if i == arr[mid]:
            print(1, end = ' ')
            flag = 1
            break
        elif i < arr[mid]: end = mid - 1
        else: start = mid + 1
    if flag == 0: print(0, end = ' ')
