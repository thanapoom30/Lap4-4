#include <stdio.h>

int main()
{
    float l1, l2, h, sumL, x;
    printf("Input L1 : ");
    scanf("%f", &l1);
    printf("Input L2 : ");
    scanf("%f", &l2);
    printf("Input height : ");
    scanf("%f", &h);
    if(l2>l1){
    x=(l2/l1)*100;
    printf("L2 = %f % \n",x );
    sumL=l1+l2;
    if(x>=40){
    printf("Area is %0.2f", 0.5 * h * sumL);}
	}
    return 0;
}