#include <stdio.h>
#include <math.h>
int dig(int n){
    int a,r,c=0;
    while(n!=0){
        r=n%10;
        c++;
        n=n/10;
    }
    return c;
}
int main()
{
    int n,a,r,p,c=0;
    printf("ENTER THE NUMBER ");
    scanf("%d",&n);
    p=n;
    r=dig(n);
    while(n!=0){
        a=n%10;
        c+=pow(a,r);
        n=n/10;
    }
    if(c==p){
        printf("%d is armstrong number",p);
    }
    else{
        printf("%d is not an armstrong number",p);
    }

    return 0;
}
