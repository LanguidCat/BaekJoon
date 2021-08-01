while True:
    n = input()
    if n == '0': break

    result = 1
    for i in n:
        if i == '1': result += 2
        elif i == '0': result += 4
        else: result += 3
        result += 1
    print(result)
