#include <stdio.h>
int fib()
{
    static int x=0,y=0,z=1;
    x=y;
    y=z;
    z=x+y;
    return(z);
}
int main()
{
    printf("Enter the number of fibonacci terms to be printed: ");
    int terms;
    scanf("%d",&terms);
    
    for(int i=0;i<terms;i++)
    {
        if(i==0)
            printf("0 ");
        else if(i==1)
            printf("1 ");
        else 
            printf("%d ",fib());
    }
}