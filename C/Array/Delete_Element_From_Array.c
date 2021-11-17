#include <stdio.h>
int main(){
    int array[100], position, c, n,s=0;
    printf("Enter number of elements in array: ");
    scanf("%d",&n);
    s=n;
    printf("Enter %d elements ", n);
    for ( c = 0 ; c < n ; c++ )
    scanf("%d",&array[c]);
    printf("Enter the location where you wish to delete element\n");
    scanf("%d",&position);
    if ( position>=n+1||position <1){   
    	printf("Deletion not possible.\n");
    }
    else{    
        for(c=position-1;c<n-1;c++){
        	array[c]=array[c+1];   
			s++;
		}
        printf("Resultant array is: ");
        for(c=0;c<n-1;c++) {      
        	printf("%d ", array[c]);  
        }
		printf("\nNo of shifts %d ",s-n);      
    }    
    return 0;
}
