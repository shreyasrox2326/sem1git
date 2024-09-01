#include <stdio.h>
int main()
{
    int v;
    int *pv;
    v=4;
    pv=&v;
    printf("%d",*pv);
}