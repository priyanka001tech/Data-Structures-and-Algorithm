#include <stdio.h>
 
int main()
{
    char s[1000];  
    int i,k=0;
    printf("Enter  the string : ");
    gets(s);
    
    for(i=0;s[i]!='\0';i++){
     	s[i]=s[i+k];
     	
     	if(s[i]==' ')
     	{
		  k++;
		  i--;
	    } 	
    }
    printf("string without spaces: ");
 	printf("%s",s);   
    return 0;
}
