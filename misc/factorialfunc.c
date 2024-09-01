#include <stdio.h>
int factorial(int n)
{
    int fact=1,i=1;
    do
    {
        fact*=i;
        i++;
    }
    while (i<=n);
    return(fact);
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("%d! = %d",n,factorial(n));
}