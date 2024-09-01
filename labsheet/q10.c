#include <stdio.h>
int main()
{
    unsigned long long n,i,pre1=1,pre2=1,cur;
    printf("Enter the number of fibonacci numbers to be printed: ");
    scanf("%llu",&n);
    for (i=0;i<n;i++)
    {
        printf("%llu\n",pre2);
        cur=pre1+pre2;
        pre2=pre1;
        pre1=cur;
    }

}