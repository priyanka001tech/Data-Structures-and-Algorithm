#include <stdio.h>
#include <math.h>

int max(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int min(int a,int b){
    if(a>b){
        return b;
    }
    else{
        return a;
    }
}
int main()
{
    int mx=-10000000;
    int mn=99999999;
    int a[10];
    int s=0,i;
     printf("Enter the numbers ");
    for(i=0;i<10;i++){
      scanf("%d",&a[i]);
    }
     for(i=0;i<9;i++){
      if(a[i]>a[i+1]){
         mx=max(mx,a[i]);
      }
      else{
          mn=min(mn,a[i]);
      }
    }
       printf("%d %d",mx,mn);
    
    return 0;
}
