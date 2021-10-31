#include<stdio.h>
#include<math.h>
int main(){
		int a,b,c;
		printf("ENTER THE VALUES OF A,B AND C :");
		scanf("%d %d %d",&a,&b,&c);
		
	    int d = b*b - 4*a*c;
	    float s = sqrt(abs(d));
	   
	   if (d > 0) {
	      printf("Roots are both real and different \n");
	      printf("%f\n%f",(float)(-b+s)/(2*a) , (float)(-b-s)/(2*a));
	   }
	   
	   else if (d == 0) {
	      printf("Roots are real and same \n");
	      printf("%f %f",-(float)(b)/(2*a),-(float)(b)/(2*a));
	   } 
	   
	   else {
	      printf("Roots are complex \n");
	      printf("%f + i%f\n%f - i%f", -(float)b/(2*a), s , -(float)b/(2*a) , s);
	   }
}
