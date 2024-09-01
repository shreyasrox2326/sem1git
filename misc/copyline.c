#include <stdio.h>
int main()
{
    int h;
    h=getchar();
    while(h!='\n')
    {
        printf("%d ",h);
        if(h==10)
            printf("\n");
        h=getchar();
    }
}
