ch=65
n=int(input("Enter the row: "))

for i in range(0,n):
	for j in range(0,i+1):
		print(chr(ch),end=" ")
	ch+=1	
	print()	
