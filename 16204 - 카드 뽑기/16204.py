# N = 전체 카드, M = O 개수, K = 적으려는 O 개수
# 같은 모양이 적히는 카드의 최대 개수는?

N, M, K = map(int, input().split())

if M <= K: O = M
else: O = K

if N - M <= N - K: X = N - M
else: X = N - K

print(O + X)
