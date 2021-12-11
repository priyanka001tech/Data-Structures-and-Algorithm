a=2
b=1
i=0
print(a,b,sep='\n')
while i<=10:
    c=a+b
    a=b
    b=c
    i+=1
    print(c)
