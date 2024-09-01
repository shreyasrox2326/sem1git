#include <stdio.h>
int main()
{
    int a,b,c;
    int w,x,y,z;
    a=8;
    b=3;
    c=-5;
    w=2*b+3*(a-c);
    x=a%b;
    y=(a*c)%b;
    z=a*(c%b);
    printf("expression a: %d\nexpression b: %d\nexpression c: %d\nexpression d: %d\n",w,x,y,z);
}