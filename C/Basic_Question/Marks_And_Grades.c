#include<stdio.h>
int main(){
	int n;
	printf("ENTER THE MARKS : ");
	scanf("%d",&n);
	
	if(n>=90 && n<=100){
		printf("THE GRADE IS O");
	}
	else if(n>=80 && n<90){
		printf("THE GRADE IS E");
	}
	else if(n>=70 && n<80){
		printf("THE GRADE IS A");
	}
	else if(n>=60 && n<70){
		printf("THE GRADE IS B");
	}
	else if(n>=50 && n<60){
		printf("THE GRADE IS C");
	}
	else if(n>=40 && n<50){
		printf("THE GRADE IS D");
	}
	else if(n>=0 && n<40){
		printf("THE GRADE IS F");
	}
	else{
		printf("INVALID MARKS");
	}
		
}
