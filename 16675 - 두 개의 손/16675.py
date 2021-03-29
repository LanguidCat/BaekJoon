import sys

ml, mr, tl, tr = sys.stdin.readline().split()

if (ml == 'S' and mr == 'S') and (tl == 'R' or tr == 'R'): print("TK")
elif (ml == 'R' and mr == 'R') and (tl == 'P' or tr == 'P'): print("TK")
elif (ml == 'P' and mr == 'P') and (tl == 'S' or tr == 'S'): print("TK")
elif (tl == 'S' and tr == 'S') and (ml == 'R' or mr == 'R'): print("MS")
elif (tl == 'R' and tr == 'R') and (ml == 'P' or mr == 'P'): print("MS")
elif (tl == 'P' and tr == 'P') and (ml == 'S' or mr == 'S'): print("MS")
else: print("?")
