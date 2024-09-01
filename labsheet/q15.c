#include <stdio.h>
#include <math.h>
#include <ctype.h>
int main()
{
    int i,j;
    double x,y;
    char c='c', d='d';
    i=10;
    j=12;
    x=2.45;
    y=5.22;
    printf("(a) %d\n",abs(i-2*j));
    printf("(b) %f\n",log(exp(x)));
    printf("(c) %f\n",fabs(x+y));
    printf("(d) %d\n",isprint(c));
    printf("(e) %d\n",isdigit(c));
    printf("(f) %f\n",ceil(x));
    printf("(g) %f\n",floor(x));
    printf("(h) %f\n",exp(x));
    printf("(i) %f\n",sqrt(x*x+y*y));
    printf("(j) %d\n",isascii(10*j));
    printf("(k) %c\n",toascii(10*j));
}
