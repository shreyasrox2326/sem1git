#include <stdio.h>
int main()
{
    int i=0,x;
    printf("Enter the number of numbers: ");
    scanf("%d",&x);
    float fact,numb,sum=0.0,avg=0.0;
    while(i<x)
    {
        printf("factor %d: ",i+1);
        scanf("%f",& fact);
        printf("num %d: ",i+1);
        scanf("%f",& numb);
        avg=avg+(fact*numb);
        sum=sum+fact;
        i=i+1;
    }
    printf("The weighted average is %.4f\n",avg/sum);
    
}
