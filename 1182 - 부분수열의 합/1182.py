def solve(idx, SUM):
    global rslt
    if idx >= N: return
    SUM += arr[idx]
    if SUM == S: rslt += 1
    solve(idx+1, SUM-arr[idx])
    solve(idx+1, SUM)


rslt = 0
N, S = map(int, input().split())
arr = list(map(int, input().split()))
solve(0, 0)
print(rslt)