def make(n, lst):
    rslt = ""
    for i in range(n):
        if not rslt: rslt += lst[i]
        elif rslt[0] >= lst[i]: 
            tmp = rslt.split()
            tmp.insert(0, lst[i])
            rslt = ''.join(tmp)
        else: rslt += lst[i]
    return rslt

a = int(input())
for i in range(a):
    b = int(input())
    lst = input().split()
    print(make(b, lst))
