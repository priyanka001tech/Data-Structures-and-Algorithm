ch=65
n=int(input("Enter the row: "))

for i in range(0,n):
	ch=65
	for j in range(0,i+1):
		print(chr(ch+j),end=" ")
	print()	
