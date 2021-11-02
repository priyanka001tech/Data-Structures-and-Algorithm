#include<stdio.h>
int main(){
	char ch;
	int a,b;
	printf("ENTER THE OPERATOR (+,-,*,/) : ");
	scanf("%c",&ch);
	printf("ENTER THE VALUES : ");
	scanf("%d %d",&a,&b);
	 
	switch(ch){
		case '+': printf("sum is %d",a+b);
				  break;
		case '-': printf("subtraction is %d",a-b);
				  break;
		case '*': printf("mul is %d",a*b);
				  break;
		case '/': printf("division is %d",a/b);
				  break;
		default: printf("not correct");		  		  		  		  	
			
	}
	return 0;
}
