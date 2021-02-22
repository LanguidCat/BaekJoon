inpt = input()
rslt = "{"

for i in range(len(inpt) - 2):
    for j in range(i + 1, len(inpt) - 1):
        tmp = ""
        for k in range(i, -1, -1):
            tmp += inpt[k]
        for k in range(j, i, -1):
            tmp += inpt[k]
        for k in range(len(inpt) - 1, j, -1):
            tmp += inpt[k]
        
        if rslt > tmp:
            rslt = tmp

print(rslt)
