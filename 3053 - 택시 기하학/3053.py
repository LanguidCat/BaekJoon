import sys
import math

R = int(sys.stdin.readline())

U = R ** 2 * math.pi
T = R ** 2 * 2
print(f"{U:0.6f}")
print(f"{T:0.6f}")
