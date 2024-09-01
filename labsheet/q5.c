#include <stdio.h>
#include <math.h>
int main()
{
    float x,y,z,a,b,c,d;
    x=8.8;
    y=3.5;
    z=-5.2;
    a=x/(y+z);
    b=2*y+3*(x-z);
    c=2*x/(3*y);
    d=remainder(x,y);
    printf("a=%.2f\nb=%.2f\nc=%.2f\nd=%.2f\n",a,b,c,d);
}