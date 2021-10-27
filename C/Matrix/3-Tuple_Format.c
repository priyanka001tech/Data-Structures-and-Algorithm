#include <stdio.h>
 
int main (){
    int matrix[10][10], tuple[10][3];
    int i, j, m, n, s=0;
    int count = 0;
 
    printf("Enter the order of the matrix \n");
    scanf("%d %d", &m, &n);
    printf("Enter the elements of the matrix \n");
    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] != 0) {
                tuple[s][0]=i;
                tuple[s][1]=j;
                tuple[s][2]=matrix[i][j];
                s++;
            }
            else{
            	count++;
			}
        }
    }
    if (count > ((m * n) / 2)){
        printf("The given matrix is Sparse Matrix\n");
        printf("3-tuple format: \n");
	    for(i=0;i<s;i++){
	    	for(j=0;j<3;j++){
	    		printf("%d ",tuple[i][j]);
			}
			printf("\n");
		}
    }
    else{
    	printf("\nThe given matrix is not a Sparse Matrix \n");
	}   
    
    return 0;
}
