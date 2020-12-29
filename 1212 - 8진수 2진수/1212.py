O = input()

for i in range(len(O)):
    
    if O[i] == '0':
        if i == 0:
            print('0')
            break
        else: print('000', end = '')

    elif O[i] == '1':
        if i == 0: print('1', end = '')
        else: print('001', end = '')
    
    elif O[i] == '2':
        if i == 0: print('10', end = '')
        else: print('010', end = '')

    elif O[i] == '3':
        if i == 0: print('11', end = '')
        else: print('011', end = '')

    elif O[i] == '4':
        if i == 0: print('1', end = '')
        else: print('100', end = '')

    elif O[i] == '5':
        if i == 0: print('101', end = '')
        else: print('101', end = '')

    elif O[i] == '6':
        if i == 0: print('110', end = '')
        else: print('110', end = '')

    else:
        if i == 0: print('111', end = '')
        else: print('111', end = '')
