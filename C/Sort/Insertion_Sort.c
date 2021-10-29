#include<stdio.h>

void insertionSort(int *arr,int n){
	int i,j,k;
	for(i=1;i<n;i++){
		int curr=arr[i];
		j=i-1;
		while(arr[j]>curr && j>=0){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=curr;	
		printf("Array elements are after %d pass ",i);
		for(k=0;k<n;k++){
			printf("%d ",arr[k]);
		} 
		printf("\n");
	}
}

int main(){
	int n,i;
	printf("Enter the number: ");
	scanf("%d",&n);
	int arr[100];
	printf("Enter the array: ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	insertionSort(arr,n);
	printf("\nSorted array: \n");
    for (i=0; i <n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
