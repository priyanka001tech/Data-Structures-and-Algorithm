# Write a program to obtain x, y, z from user and calculate expression : 4x4 + 3y3 + 9z + 6π
import math
x = int(input("Enter x: "))
y = int(input("Enter y: "))
z = int(input("Enter z: "))
res = 4 * x ** 4 + 3 * y ** 3 + 9 * z + 6 * math.pi
print("Result =", res)
