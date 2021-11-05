#include <stdio.h>

int main() {
    int i, j, n, isPrime;
    printf("Find prime numbers between 1 to : ");
    scanf("%d", &n);

    printf("All prime numbers between 1 to %d are:\n",n);
    for(i=2; i<=n; i++){
       isPrime = 1; 
       for(j=2; j<=i/2; j++){
          if(i%j==0){
             isPrime = 0;
              break;
            }
        }
        if(isPrime==1) {
           printf("%d ", i);
        }
    }
    return 0;
}
