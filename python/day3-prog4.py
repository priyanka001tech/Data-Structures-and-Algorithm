def fact(n):
	f=1
	for i in range(1,n+1):
		f=f*i
	return f

n=int(input("Enter the n: "))
sum=1

for i in range(1,n+1):
	sum+=1/fact(i)

print(sum)	
	
