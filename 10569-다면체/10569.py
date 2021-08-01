import sys

T = int(sys.stdin.readline())

for i in range(T):
    V, E = map(int, sys.stdin.readline().split())
    print(E - V + 2)
