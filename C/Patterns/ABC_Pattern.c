#include <stdio.h>

int main(){
    int a=65;
    int n;
    printf("Enter the range : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%c ",a);
            
        }
        a++;
        printf("\n");
    }
    return 0;
}

//Output:-
Enter the range : 5
A 
B B 
C C C 
D D D D 
E E E E E 
