#include<stdio.h>
#include<math.h>
 
int factorial(int n)
{
     int i,fact=1;
      for(i=1;i<=n;i++)
         fact=fact*i;
      return fact;
}
 
 
int main()
{
     double x,sum=1,a,z;
     int n, i,sign=1;
 
        printf("Enter the value for x : ") ;  
        scanf("%lf", &x) ;
        printf("Enter the value for n : ") ;   
        scanf("%d", &n) ;
 
        x = x * 3.14159 / 180 ;  
        z=cos(x);
        i=0;
        for(i=2;i<=n;i=i+2)
       {
        sign=-sign;
        a=sign*pow(x,i)/factorial(i);
        sum=sum+a;
      }
 
        printf("cos(x) is approximately %.4lf\n", sum);
        printf("%f",z);
 
    return 0;
}
