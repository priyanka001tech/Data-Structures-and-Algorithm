#include <stdio.h>

int main(){
    int size,n,p,i,c=0;
    int numArray[100];

    printf("Enter size of the array : ");
    scanf("%d", &size);

    printf("Enter the array: ");
    for(i=0;i<size;i++){
        scanf("%d",&numArray[i]);
    }

    printf("Enter the number add to this array : ");
    scanf("%d",&n);

    printf("Enter the position to add this number : ");
    scanf("%d",&p);
	if(p<1 || p>size+1){
		printf("Not possible");
	}
	else{
	    for(i=size;i>=p-1;i--){
	        numArray[i+1]=numArray[i];
	        c++;
	    }
	    numArray[p-1] = n;
	
	    for(i=0; i<size+1;i++){
	        printf("%d ", numArray[i]);
	    }
	    printf("\nNo of shift operation is %d",c-1);
	}
	return 0;
}
