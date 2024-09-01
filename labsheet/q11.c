#include <stdio.h>
int main()
{
    int x,i,j,k;
    printf("Enter the number of lines to be printed:\n");
    scanf("%d",&x);
    for(i=1;i<x+1;i++)
    {
        for(j=x-i;j>0;j--)
        {
            printf(" ");
        }
        for(k=1;k<2*i;k=k+1)
        {
            printf("*");
        }
        printf("\n");
    }
}