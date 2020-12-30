Ax1, Ay1, Ax2, Ay2 = map(int, input().split())
Bx1, By1, Bx2, By2 = map(int, input().split())

print(max(max(Ax2, Bx2) - min(Ax1, Bx1), max(Ay2, By2) - min(Ay1, By1)) ** 2)
