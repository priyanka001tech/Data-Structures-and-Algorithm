n=2
m=9
sum=0

for i in range(7):
	if(i%2==0):
		sum+=n/m
	else:
		sum-=n/m
	
	n+=3
	m+=4	
	
print(sum)	
	
