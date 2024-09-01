#include <stdio.h>
int main()
{
    int i=8, j=5, k;
    float x= 0.005, y=-0.01, z,t;
    char c= 'c', d = 'd';
    t=2 *((i / 5) + (4 * (j-3)) % (i + j-2));
    printf("%.2f\n",t);
    t=(i-3*j) % (c+2 *d) / (x - y);
    printf("%.2f\n",t);
    t=i++;
    printf("%.2f\n",t);
    t= ++i;
    printf("%.2f\n",t);
    t=++ x;
    printf("%.2f\n",t);
    t=y--;
    printf("%.2f\n",t);
    t=!(c == 99);
    printf("%.2f\n",t);
    t=5* (i + j) > "c";
    printf("%.2f\n",t);
    t=(x>y) && (i> 0) || (j<5);
    printf("%.2f\n",t);
    t=(x>y) && (i> 0) && (j<5);
    printf("%.2f\n",t);
    k = (j == 5) ? i : j;
    printf("%d\n",k);
    k = (j > 5)? i: j;
    printf("%d\n",k);
    z = (x >= 0) ? x : 0;
    printf("%.2f\n",z);
}