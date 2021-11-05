#include <stdio.h>

int main()
{
    int num, i,s=0,p;
    printf("Enter a number: ");
    scanf("%d", &num);
    p=num;
    for (i = 1; i < num; ++i) {
        if (num % i == 0) {
            s+=i;
        }
    }
    if(s==p){
        printf("%d is perfect number ",p);
    }
    else{
        printf("%d not perfect number ",p);
    }
    return 0;
}
