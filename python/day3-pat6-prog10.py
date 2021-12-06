a=0
n=int(input("Enter the row: "))

for i in range(0,n):
	for j in range(0,i+1):
		print(a,end=" ")
	a+=2
	print()	
