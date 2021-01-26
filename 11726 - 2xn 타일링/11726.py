arr = [0, 1, 2]
n = int(input())

for i in range(3, n + 1):
    arr.append((arr[i - 1] % 10007 + arr[i - 2] % 10007) % 10007)
print(arr[n] % 10007)
