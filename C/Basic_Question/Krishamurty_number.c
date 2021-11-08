#include <stdio.h>
#include <math.h>
int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}
int main()
{
    int n,a,r,p,c=0;
    printf("ENTER THE NUMBER ");
    scanf("%d",&n);
    p=n;
    while(n!=0){
        a=n%10;
        c+=fact(a);
        n=n/10;
    }
    if(c==p){
        printf("%d is krishamurty number",p);
    }
    else{
        printf("%d is not a krishamurty number",p);
    }

    return 0;
}
