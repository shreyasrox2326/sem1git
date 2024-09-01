#include <stdio.h>
#include <math.h>
int main()
{
    int num, i=2, flag=0;
    printf("Enter the number: ");
    scanf("%d", &num);
    float rut=pow(num,0.5);

while(i<=rut)
{
    if(num%i==0)
    {
        flag=1;
        printf("%d is not prime\n",num);
        break;
    }
    i++;
}
if (flag==0)
    printf("%d is prime.\n", num);
}