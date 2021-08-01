while(1):
    N = int(input())
  
    if N == 0: break
  
    temp = N
    rev_N = 0
    while(temp > 0):
        rev_N *= 10
        rev_N += temp % 10
        temp //= 10
    
    if N == rev_N: print("yes")
    else: print("no")
