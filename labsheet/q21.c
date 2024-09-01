#include <stdio.h>
void swap(int *x, int *y)
{
    int b;
    b=*x;
    *x=*y;
    *y=b;
    return;
}
int main()
{
    int n=1;
    int m=5;
    printf("m=%d n=%d (before swap)\n",m,n);
    swap(&m,&n);
    printf("m=%d n=%d (after swap)\n",m,n);
}