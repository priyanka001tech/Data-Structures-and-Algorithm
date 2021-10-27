#include <stdio.h>
 
int main (){
    int matrix[10][10];
    int i, j, m, n;
    int count = 0;
 
    printf("Enter the order of the matrix \n");
    scanf("%d %d", &m, &n);
    printf("Enter the elements of the matrix \n");
    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 0) {
                ++count;
            }
        }
    }
    if (count > ((m * n) / 2)){
        printf("The given matrix is Sparse Matrix\n");
    }
    else{
    	printf("\nThe given matrix is not a Sparse Matrix \n");
	}   
    printf("There are %d number of Zeros.", count);
    return 0;
}
