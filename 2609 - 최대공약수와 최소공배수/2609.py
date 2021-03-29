def gcd(a, b):
    while True:
        c = a % b
        if c == 0: return b
        a = b
        b = c

a, b = map(int, input().split())
rslt = gcd(max(a, b), min(a, b))
print(rslt, a * b // rslt, sep = '\n')
