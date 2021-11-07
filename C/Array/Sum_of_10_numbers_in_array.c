#include <stdio.h>

int main()
{
    int a[10];
    int s=0,i;
    printf("Enter the numbers ");
    for(i=0;i<10;i++){
      scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++){
      s+=a[i];
    }
    printf("The sum is %d",s);
    
    return 0;
}
