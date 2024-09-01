#include <stdio.h>
int main()
{
    int n,fact=1,i=1;
    printf("Write the number: ");
    scanf("%d",&n);
    do
    {
        fact*=i;
        i++;
    }
    while (i<=n);
    printf("%d! = %d\n",n,fact);
}