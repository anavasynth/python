import math

side = float(input("Enter side: "))
angle = float(input("Enter angle: "))

p = side*4
s = pow(side, 2) * math.sin(math.radians(angle))

print("\nS = ", s, "P = ", p)