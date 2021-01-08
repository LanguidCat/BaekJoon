import sys

for i in range(int(sys.stdin.readline())):
    B = int(sys.stdin.readline())
    
    if B < 3:
        for j in range(B):
            print("#" * B)
        print("")
        
    else:
        print("#" * B)
        for j in range(B - 2): print("#" + "J" * (B - 2) + "#")
        print("#" * B, "\n")
