#include <stdio.h>
int main(){	
   int m, n, i, j, first[10][10], second[10][10], sum[10][10];
   printf("Enter the number of rows and columns of matrix\n");
   
   scanf("%d %d", &m, &n);
   printf("Enter the elements of first matrix\n");
   for (i = 0; i < m; i++)
      for (j = 0; j < n; j++)
         scanf("%d", &first[i][j]);
 
   printf("Enter the elements of second matrix\n");
   for (i = 0; i < m; i++)
      for (j=0 ; j< n; j++)
         scanf("%d", &second[i][j]);
   
   printf("Sum of entered matrices:-\n");
   for (i = 0; i < m; i++) {
      for (j = 0 ; j < n; j++) {
         sum[i][j] = first[i][j] + second[i][j];
         printf("%d ", sum[i][j]);
      }
      printf("\n");
   }
 
   return 0;
}
