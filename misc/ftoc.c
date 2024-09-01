#include <stdio.h>
int main()
{
    char chr=248;
    float f,c;
    printf("enter the value in %cF: ",chr);
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("%.2f%cF is %.2f%cC\n\n",f,chr,c,chr);
}