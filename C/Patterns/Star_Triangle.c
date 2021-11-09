#include <stdio.h>

int main(){
    int n;
    printf("Enter the range : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("* ");
            
        }
        printf("\n");
    }

    return 0;
}

//Output:- 
Enter the range : 7
* 
* * 
* * * 
* * * * 
* * * * * 
* * * * * * 
* * * * * * * 
