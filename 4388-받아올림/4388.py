import sys

while True:
    a, b = sys.stdin.readline().split()
    if (a, b) == ('0', '0'): break
    idx = tmp = 0
    if len(a) == len(b):
        for i in range(1, len(a) + 1):
            if int(a[-i]) + int(b[-i]) + tmp > 9:
                idx += 1
                tmp = 1
        else: tmp = 0
    elif len(a) > len(b):
        for i in range(1, len(b) + 1):
            if int(a[-i]) + int(b[-i]) + tmp > 9:
                idx += 1
                tmp = 1
            else: tmp = 0
        for i in range(len(b) + 1, len(a) + 1):
            if int(a[-i]) + tmp > 9:
                idx += 1
                tmp = 1
            else: tmp = 0
    elif len(b) > len(a):
        for i in range(1, len(a) + 1):
            if int(b[-i]) + int(a[-i]) + tmp > 9:
                idx += 1
                tmp = 1
            else: tmp = 0
        for i in range(len(a) + 1, len(b) + 1):
            if int(b[-i]) + tmp > 9:
                idx += 1
                tmp = 1
            else: tmp = 0

    print(idx)
