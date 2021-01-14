LST = list(input())

tall = 10
shape = LST[0]
for i in range(1, len(LST)):
    if LST[i] == '(' and shape == '(': tall += 5
    
    elif LST[i] == '(' and shape == ')':
        tall += 10
        shape = '('
    
    elif LST[i] == ')' and shape == ')': tall += 5
    elif LST[i] == ')' and shape == '(':
        tall += 10
        shape = ')'
print(tall)
