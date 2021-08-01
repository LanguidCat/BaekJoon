import sys
N = int(sys.stdin.readline())

for i in range(1, N + 1):
    indent = " " * (N - i)
    stars = "* " * i
    print(indent, end = '')
    print(stars)
