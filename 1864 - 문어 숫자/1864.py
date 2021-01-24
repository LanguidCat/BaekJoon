while True:
    lst = list(input())
    if lst[0] == '#': break
    lst.reverse()
    idx = result = a = 0
    for i in lst:
        if i == '-': a = 0
        elif i == '\\': a = 1
        elif i == '(' : a = 2
        elif i == '@' : a = 3
        elif i == '?' : a = 4
        elif i == '>' : a = 5
        elif i == '&' : a = 6
        elif i == '%' : a = 7
        elif i == '/' : a = -1
        
        result += a * (8 ** idx)
        idx += 1
    print(result)
