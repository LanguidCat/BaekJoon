n, x = map(int, input().split())
a = list(map(int, input().split()))
r = []
for i in a:
    if i < x: r.append(i)
for i in r:
    print(str(i), end = " ")
