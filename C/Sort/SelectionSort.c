#include<stdio.h>

void selectionSort(int *arr,int n){
	int i,j,k,min_i,mini,temp;
	for(i=0;i<=n-2;i++){
		min_i=i;
		mini=arr[i];
		for(j=i+1;j<=n-1;j++){
			if(mini>arr[j]){
				mini=arr[j];
				min_i=j;
			}
		}
		if(min_i!=i){
			temp=arr[i];
			arr[i]=arr[min_i];
			arr[min_i]=temp;
		}
		printf("Array elements are after %d pass ",i+1);
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
	selectionSort(arr,n);
	printf("\nSorted array: \n");
    for (i=0; i <n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
