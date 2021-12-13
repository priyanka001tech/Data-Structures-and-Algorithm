def Kaprekar(start, end):
   for i in range(start, end + 1):
      sqr = i ** 2
      digits = str(sqr)
      length = len(digits)
      for x in range(1, length):
         left = int("".join(digits[:x]))
         right = int("".join(digits[x:]))
         if (left + right) == i:
            print("Number: " + str(i) + "\tLeft: " + str(left) + "\tRight: " + str(right))

Kaprekar(0,1000)
