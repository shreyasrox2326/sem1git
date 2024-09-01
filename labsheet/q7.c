#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    float r1,r2;

    printf("enter the coefficients a,b,c\n");
    scanf("%d,%d,%d",&a,&b,&c);
    r1=(-b+pow((pow(b,2)-(4*a*c)),0.5))/(2*a);
    r2=(-b-pow((pow(b,2)-(4*a*c)),0.5))/(2*a);
    printf("the roots are:\n%.2f & %.2f\n",r1,r2);
}
