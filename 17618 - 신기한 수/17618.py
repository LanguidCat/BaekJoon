import sys

ans = 0
for i in range(1, int(sys.stdin.readline()) + 1):
    sum = 0
    a = str(i)
    for j in a: sum += int(j)
    if i % sum == 0: ans += 1
print(ans)
