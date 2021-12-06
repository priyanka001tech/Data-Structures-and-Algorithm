n=int(input("Enter the value of n: "))
c1=0
c2=0
c3=0
while(n!=0):
	p=int(input("Enter employee age: "))
	if(p>=26 and p<=35):
		c1+=1
	elif(p>=36 and p<=45):
		c2+=1
	elif(p>=46 and p<=55):
		c3+=1
	
	n-=1
				
print("Employees in age group 26 - 35: ",c1)
print("Employees in age group 36 - 45: ",c2)
print("Employees in age group 46 - 55: ",c3)

		
