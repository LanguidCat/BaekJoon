T = int(input())
for i in range(1, T+1):
    a, b = map(int, input().split())
    s = a + b
    print("Case #{0}: {1}".format(i, s))
