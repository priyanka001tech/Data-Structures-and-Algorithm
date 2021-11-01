#include <stdio.h>
#include <string.h>
 
int main(){
    char str[100];
    int i, len, flag;
    flag = 0;
 
    printf("Enter any String :  ");
    scanf("%s", str);
  	 
    len = strlen(str);
  	 	   	
    for(i = 0; i < len; i++){
		if(str[i] != str[len-i-1]){
			flag = 1;
			break;	
		} 
	}
	if(flag == 0){
		printf("\n %s is a Palindrome String", str);
	}
	else{
		printf("\n %s is Not a Palindrome String", str);
	}	
	
  	return 0;
}
