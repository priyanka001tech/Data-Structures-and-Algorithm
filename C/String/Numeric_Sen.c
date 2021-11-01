#include<stdio.h>
int main()
{
    char str[100],ans[100];
    printf("Enter The sentence: ");
    scanf("%[^\n]s", str);
    printf("%s", str);
    
    int i=0,j=0,c=0;
    while(str[i]!='\0'){
    	if(str[i]>='0' && str[i]<='9'){
    		ans[j]=str[i];
    		j++;
		}
		i++;
	}
	ans[j]='\0';
	if(ans[0]=='\0'){
		printf("\nNo digit is there");
	}
	else{
		printf("\nNumeric sentence is %s",ans);
	}

    return 0;
}
