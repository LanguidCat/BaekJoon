import sys

idx = 0
for i in range(int(sys.stdin.readline())):
    idx += 1
    a, b, c = map(int, sys.stdin.readline().split())
    
    if 2 * max(a, b, c) >= a + b + c: print(f"Case #{idx}: invalid!")
    elif a == b and b == c: print(f"Case #{idx}: equilateral")
    elif a == b or b == c: print(f"Case #{idx}: isosceles")
    else: print(f"Case #{idx}: scalene")
