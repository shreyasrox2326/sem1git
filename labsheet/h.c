#include <stdio.h>
void incr(int *n)
{
    *n=*n+1;
    return;
}

int main()
{
    for(int i=0;i<10;)
    {
        printf("%d ",i);
        incr(&i);
    }
}