def sqsum(num):
    if num==1 or num==7:
        return True  
    x=num
    while True:
        s=0
        while x!=0:
            d=x%10
            s=s+d*d
            x=x//10
        x=s
        if s<9:
            break
            
    if s==1 or s==7:
            return True
    else:
        return False

i=0
c=0
while True:
    if sqsum(i):
        c=c+1 #counter for printing 10 happy numbers
        print(i,' is a Happy Number 😁')
        if c==10:
            break
        i=i+1
    else:
        i=i+1
