# Convert a decimal number to a number of a given base b.

def val(num):
 
    if (num >= 0 and num <= 9):
        return chr(num + ord('0'))
    else:
        return chr(num - 10 + ord('A'))
 

def fromDeci(res, base, n):
 
    while (n > 0):
        res+= val(n % base)
        n = int(n / base)
 
    res = res[::-1]
 
    return res;
 
n = int(input("Enter the number: "))
b = int(input("Enter the base: "))
res = "";
print("Equivalent of", n, "in base",
       b, "is", fromDeci(res, b, n))


OUTPUT:
Enter the number: 1052

Enter the base: 2
Equivalent of 1052 in base 2 is 10000011100
