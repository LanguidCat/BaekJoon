result = int(input())

while True:
    T = input()
    if T == '=': break
    
    n = int(input())
    
    if T == '+': result += n
    elif T == '-': result -= n
    elif T == '*': result *= n
    elif T == '/': result /= n

    result = int(result)

print(result)
