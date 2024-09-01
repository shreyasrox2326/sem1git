#include <stdio.h>
int main()
{
    int arr[3]={0,1,0};
    int i,n;
    printf("Enter the number of fibbonacci numbers to be printed: ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("%d\n",arr[1]);
        arr[2]=arr[0]+arr[1];
        arr[0]=arr[1];
        arr[1]=arr[2];
    }
}