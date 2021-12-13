def armstrong(num):
    n=num
    pow=len(str(n))
    s=0
    while n>0:
        d=n%10
        s+=d**pow
        n=n//10
    if s==num:
        print(num,' is an armstrong or narcissistic number')
    else:
        print(num,' is not an armstrong or narcissistic number')
for i in range(1001):
    armstrong(i)
