#include <stdio.h>
int main()
{

    int f,c;
    f=0;
    printf("Farenheit   |    Celcius\n");
    while(f<=100)
    {
        c=5*(f-32)/9;
        printf("%6d      |  %5d\n",f,c);
        f+=20;
    }
        
}