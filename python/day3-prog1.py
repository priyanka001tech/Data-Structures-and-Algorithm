print("Enter the q to stop: ")
while(1):
	m=input("Enter the number: ")
	if(m=="q"): break;
	
	n=int(m)
	p=n
	rev=0
	while(n>0):
		rem=n%10
		rev=rev*10+rem
		n=n//10
	if(rev==p):
		print(p, " is pallindrome")	
	else:
		print(p, " not a pallindrome")
	
