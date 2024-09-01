#include <stdio.h>
int main()
{
    float a,b;
    char c;
    printf("Enter the expression: ");
    scanf("%f %c %f", &a,&c,&b);
    switch (c)
    {
        case '+':
            printf("%f\n",a+b);
            break;
        case '-':
            printf("%f\n",a-b);
            break;
        case '*':
            printf("%f\n",a*b);
            break;
        case '/':
            printf("%f\n",a/b);
            break;
    }
}