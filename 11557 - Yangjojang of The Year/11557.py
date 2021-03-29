import sys

for i in range(int(sys.stdin.readline())):
    School = []
    Liquor = []
    n = int(sys.stdin.readline())
    for j in range(n):
        a, b = sys.stdin.readline().split()
        School.append(a)
        Liquor.append(int(b))

    M = 0
    result = ""
    for j in range(n):
        if Liquor[j] > M:
            M = Liquor[j]
            result = School[j]
    
    print(result)
