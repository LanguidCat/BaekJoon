N, M = map(int, input().split())

if N == 1 and M == 1: print(0)
elif N % 2 == 0:
    print(N // 2 * M)
elif M % 2 == 0:
    print(M // 2 * N)
else:
    a = (N - 1) // 2 * M
    b = (M - 1) // 2
    print(a + b)
