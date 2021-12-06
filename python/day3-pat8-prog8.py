
n=int(input("Enter the row: "))

for j in range(1,n+1):
	print(" " *(n-j),end="")
	print("* " *j,end="")
	print()	

for j in range(n-1,0,-1):
	print(" " *(n-j),end="")
	print("* " *j,end="")
	print()		   
