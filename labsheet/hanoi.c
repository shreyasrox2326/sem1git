#include <stdio.h>
int hanoi(char fromstack[1], int diskno, char tostack[1],char midstack[1])
// call format - move from stack - fromstack disk - diskno to stack - tostack with stack - midstack as auxilliary stack
{
    if (diskno==1)
    {
        printf("Move disk %d from stack %s to stack %s\n",diskno,fromstack,tostack);
        return 0;
    }
    else
    {
        hanoi(fromstack,(diskno-1),midstack,tostack);
        printf("Move disk %d from stack %s to stack %s\n",diskno,fromstack,tostack);
        hanoi(midstack,(diskno-1),tostack,fromstack);
    }
}
int main()
{
    int n;
    printf("Enter the number of disks: ");
    scanf("%d",&n);
    printf("\nThe solution for a hanoi tower of %d disks is: \n",n);
    hanoi("A",n,"C","B");
}