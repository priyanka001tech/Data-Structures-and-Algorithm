#include <stdio.h>

int main()
{
    int num1, num2, p,GCD;
    printf("Enter two Numbers: ");
    scanf("%d %d", &num1, &num2);
    
    for(int i = 1; i <=num1 && i <=num2; i++){
        if(num1 % i == 0 && num2 % i == 0)
            GCD = i;
    }
    printf("GCD of %d and %d is = %d", num1, num2, GCD);
    
    if(num1>num2){
        p=num1;
    }
    else{
        p=num2;
    } 
    while(num1!=0 && num2!=0){
         if((p%num1==0) && (p%num2==0))
            break;
        else
            p++;
    }
    printf("\nLCM(%d,%d) = %d", num1, num2, p);

    return 0;
}
