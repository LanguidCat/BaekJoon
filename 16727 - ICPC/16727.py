import sys

p1, s1 = map(int, sys.stdin.readline().split())
s2, p2 = map(int, sys.stdin.readline().split())
P = p1 + p2
S = s1 + s2

if P > S: print("Persepolis")
elif S > P: print("Esteghlal")
else:
    if s1 > p2: print("Esteghlal")
    elif p2 > s1: print("Persepolis")
    else: print("Penalty")
