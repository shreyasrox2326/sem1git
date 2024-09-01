#include <stdio.h>
#include <math.h>
int main()
{
    int i,x;
    float facti,prod=1;
    printf("Enter the number of numbers: ");
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        printf("Enter num %d: ",i+1);
        scanf("%f",&facti);
        prod=prod*pow(facti,1.0/x);
    }
    printf("The geometric average is %f",prod);
}