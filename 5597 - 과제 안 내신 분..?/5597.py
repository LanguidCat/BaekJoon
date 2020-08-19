l = list(range(1, 31))
for i in range(1, 29):
    a = int(input())
    l.remove(a)
l.sort()
print(l[0])
print(l[1])
