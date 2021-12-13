def properdiv(n):
    s=0
    for i in range(1, n+1):
       if n % i == 0:
           s+=i
    s=s-n
    return s

def adp(x):
    if properdiv(x)>x:
        print(x,'\tAbundant Number')
    elif properdiv(x)<x:
        print(x,'\tDeficite Number')
    else:
        print(x,'\tPerfect Number')

for i in range(1,10001):
    adp(i)
