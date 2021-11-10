# The set of input is given as ages. Then print the status according to the rules
# Age Status
# 1-1 in born
# 2-10 child
# 11-17 young
# 18-49 adult
# 50-79 old
# > 80 very old

n = int(input("Enter the age >0: "))

if(n == 1):
    print("In Born")
elif(n >= 2 and n <= 10):
    print("Child")
elif(n >= 11 and n <= 17):
    print("Young")
elif(n >= 18 and n <= 49):
    print("Adult")
elif(n >= 50 and n <= 79):
    print("Old")
else:
    print("Very Old")  


OUTPUT:
Enter the age >0: 19
Adult
