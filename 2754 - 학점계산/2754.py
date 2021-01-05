import sys

C = sys.stdin.readline()

score = 0
if C[0] == 'A': score += 4
elif C[0] == 'B': score += 3
elif C[0] == 'C': score += 2
elif C[0] == 'D': score += 1
elif C[0] == 'F': score += 0

if C[1] == '+': score += 0.3
elif C[1] == '-': score -= 0.3

print(f"{score:0.1f}")
