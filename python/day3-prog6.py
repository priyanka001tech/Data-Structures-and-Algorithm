# x - x^2 /2! + x^3 /3! - x^4 /4! + x^5 /5! - x^6 /6! (Input x)
def fact(n):
	f=1
	for i in range(1,n+1):
		f=f*i
	
	return f
		
x=int(input("Enter x: "))
sum=0

for i in range(1,7):
	p=x**i
	q=p/fact(i)
	if(i%2==0):
		sum-=q
	else:
		sum+=q

print(sum)			
