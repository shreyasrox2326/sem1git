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
            k<=i?printf("%d",k+i-1):printf("%d",3*i-k-1);
        }
        printf("\n");
    }
}