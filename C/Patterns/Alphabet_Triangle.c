#include <stdio.h>

int main()
{
    int a;
    int n;
    printf("Enter the range : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        
        for(int k=1;k<=i-1;k++){
            printf(" ");
        }
        for(int j=1;j<=n-i+1;j++){
            printf("%c ",(i+64));
            
        }
        a++;
        printf("\n");
    }

    return 0;
}

//OutPut:-
Enter the range : 6
  
A A A A A A 
 B B B B B 
  C C C C 
   D D D 
    E E 
     F 
