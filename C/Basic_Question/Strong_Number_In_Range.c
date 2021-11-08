#include <stdio.h>

int main(){
      int i, j, cur, ld;
      int fact, sum;
      for(i=1; i<=50000; i++){
        cur = i;
        sum = 0;
        while(cur > 0){
            fact = 1;
            ld = cur % 10;
            for( j=1; j<=ld; j++){
                fact = fact * j;
            }
            sum += fact; 
            cur /= 10;
        }
        if(sum == i){
            printf("%d ", i);
        }
    }
    return 0;
}
