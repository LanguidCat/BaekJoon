import sys

A, B, C, X, Y = map(int, sys.stdin.readline().split())
price = 0

if 2 * C < A + B:
    while X > 0 and Y > 0:
        X -= 1
        Y -= 1
        price += 2 * C
    
    if X > 0:
        if A > 2 * C:
            while X > 0:
                X -= 1
                price += 2 * C
        else:
            while X > 0:
                X -= 1
                price += A
        
    elif Y > 0:
        if B > 2 * C:
            while Y > 0:
                Y -= 1
                price += 2 * C
        else:
            while Y > 0:
                Y -= 1
                price += B

else:
    while X > 0:
        X -= 1
        price += A
    while Y > 0:
        Y -= 1
        price += B

print(price)
