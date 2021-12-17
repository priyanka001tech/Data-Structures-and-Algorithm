#include <stdio.h>
#include <math.h>

int fact(int x)
{
	int i,fact=1;
	for(i=1;i<=x;i++)
		fact=fact*i;
	return fact;
} 

int main()
{
	float x,sum=0,z;
	int i,j,n,c;

	printf("Enter the value of x : ");
	scanf("%f",&x);

	printf("Enter the limit of the series: ");
	scanf("%d",&n);
     
     x = x*(3.1415/180);
      z=sin(x);
	for(i=1;i<=n;i++)
	{
	    for(j=1;j<=n;j=j+2){
		  if(i%2!=0)
		  { 
			sum=sum+pow(x,j)/fact(j);
		  }
		  else{
			sum=sum-pow(x,j)/fact(j);
	      }
	    }
	    
	}
    printf("%f",z);
	printf("\nthe sum is %f",sum);
	return 0;
}
