import sys

for i in range(int(sys.stdin.readline())):
    n = int(sys.stdin.readline())

    result = f"Pairs for {n}: "
    j = 1
    while j < n - j:
        a, b = j, n - j
        result += f"{a} {b}"
        if a + 1 < b - 1: result += ", "
        j += 1
    print(result)
