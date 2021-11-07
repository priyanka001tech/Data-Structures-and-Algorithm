#include <stdio.h>
int main()
{ 
    int arr[10],even[10],odd[10],evncnt=0,oddcnt=0,i;
    printf("Input numbers in the array :");
    for(i=0;i<10;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<10;i++)
    {
        if(arr[i]%2==0){
            even[evncnt]=arr[i];
            evncnt++;
        }
        else{
            odd[oddcnt]=arr[i];
            oddcnt++;
        }
    }
    printf("The even numbers are: ");
    for(i=0;i<evncnt;i++)
       printf("%d ",even[i]);
    printf("\nThe odd numbers are: ");
    for(i=0;i<oddcnt;i++)
       printf("%d ",odd[i]);;
    return 0;
}
