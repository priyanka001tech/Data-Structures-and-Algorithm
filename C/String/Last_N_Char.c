#include <stdio.h> 
#include<string.h>
 
 int main() 
 { 
    char str[100];
    int n,l,i;
    printf("Enter the main string: "); 
    gets (str); 
    printf("Enter the position : "); 
    scanf ("%d", &n) ; 
    l=strlen(str);
    
    for(i=l-n;str[i]!='\0';i++){
    	printf("%c",str[i]);
	}
    return 0; 
 }
