#include <stdio.h>
#include <math.h>
int main()
{
   int n,i,p;
   printf("Enter the number ");
   scanf("%d",&n);
   p=sqrt(n);
   if(n==(p*p)){
       printf("%d is perfect square",n);
   }
   else{
       printf("%d is not perfect square",n);
   }

    return 0;
}
