N, K = map(int, input().split())
share = list(map(int, input().split()))
team = list(map(int, input().split()))

for i in range(K+1):
    MAX = -100000001
    for j in range(N):
        for k in range(N-i):
            if MAX < share[j] * team[k]:
                MAX = share[j] * team[k]
                idx = k
    
    if i == K: print(MAX)

    team[N-i-1], team[idx] = team[idx], team[N-i-1]