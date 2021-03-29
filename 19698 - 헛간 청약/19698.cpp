N, W, H, L = map(int, input().split())

a = (W // L) * (H // L)

if N <= a: print(N)
else: print(a)
