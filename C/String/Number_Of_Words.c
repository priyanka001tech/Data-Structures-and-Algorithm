#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter The sentence: ");
    scanf("%[^\n]s", str);
    printf("%s", str);
    
    int i=0,c=0;
    while(str[i]!='\0'){
    	if(str[i]==' '){
    		c++;
		}
		i++;
	}
	printf("\nNumber of Words is %d",c+1);
    
    return 0;
}
