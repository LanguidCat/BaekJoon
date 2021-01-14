import sys

while True:
    n = int(sys.stdin.readline())
    if n == -1: break

    prime = []
    for i in range(1, n + 1):
        if n % i == 0 and i not in prime: prime.append(i)
    
    del prime[-1]
    sum = 0
    for i in range(len(prime)): sum += prime[i]
    
    idx = 0
    if sum == n:
        a = f"{n} ="
        for i in prime:
            a += " " + str(i)
            idx += 1
            if idx < len(prime):
                a += " +"
    else: a = f"{n} is NOT perfect."

    print(a)
