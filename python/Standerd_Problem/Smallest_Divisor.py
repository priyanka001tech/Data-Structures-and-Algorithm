n=int(input("Enter the number:"))
a=[]
for i in range(2,n+1):
    if(n%i==0):
        a.append(i)

print("Smallest divisor is:",a[0])

OUTPUT:
Enter the number:15
Smallest divisor is: 3
