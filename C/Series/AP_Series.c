#include <stdio.h>

int main()
{
    float n,d,a,v;
    float s=0;
    printf("Enter the first value ");
    scanf("%f",&a);
    printf("Enter the range ");
    scanf("%f",&n);
    printf("Enter the difference ");
    scanf("%f",&d);
     v = a;
    printf("AP Series\n");
    for(int i = 0; i < n; i++) {
        printf("%f ", v);
        s += v;
        v = v + d;
    }
    printf("\nthe sum is %f",s);
    return 0;
}
