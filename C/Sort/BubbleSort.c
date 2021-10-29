#include <stdio.h>
 
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
 
void bubbleSort(int arr[], int n){
   int i, j, k;
   for (i = 0; i < n-1; i++){
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
              
        printf("Array elements are after %d pass ",i+1);
		for(k=0;k<n;k++){
			printf("%d ",arr[k]);
		} 
		printf("\n");
	}
}
 
int main(){
    int n,i;
    printf("Enter the size: ");
    scanf("%d",&n);
    int arr[100];
    for(i=0;i<n;i++){
    	scanf("%d",&arr[i]);
	}
    bubbleSort(arr, n);
    printf("\nSorted array: \n");
    for (i=0; i <n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
