while 1:
    N = input()
    if N == '0': break

    if len(N) == 1: print(N)
    else:
        while(1):
            # 각 자리수 더하기 
            n = 0
            for i in range(len(N)):
                n += int(N[i])
            
            # 검증 
            if len(str(n)) == 1:
                print(n)
                break
            else: N = str(n)
