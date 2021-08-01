n = int(input())
array = list(map(int, input().split()))
v = int(input())
s = 0

for i in array:
    if i == v: s += 1

print(s)
