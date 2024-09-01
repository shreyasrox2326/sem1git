#include <stdio.h>
int main()
{
    int arr[]={4,3,6,8,9,2,1,7,33};
    printf("%d",sizeof(arr)/sizeof(*arr));
}