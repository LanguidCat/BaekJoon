import sys

def a(Cn):
    if Cn % 2 == 0: return Cn / 2
    else: return 3 * Cn + 1

C1 = int(sys.stdin.readline())

result = C1
idx = 1
while result != 1:
    result = a(result)
    idx += 1
print(idx)
