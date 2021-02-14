apb = ['c=', 'c-', 'd-', 'lj', 'nj', 's=', 'z=']
s = input()

l = len(s)
rslt = 0
i = 0
while i < l:
    if l - i >= 2 and (s[i] + s[i + 1]) in apb:
        rslt += 1
        i += 2
    elif l - i >= 3 and (s[i] + s[i + 1] + s[i + 2]) == 'dz=':
        rslt += 1
        i += 3
    else:
        rslt += 1
        i += 1
print(rslt)
