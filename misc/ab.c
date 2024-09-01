#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *f;
    f=fopen("hello.dat","a");
    fprintf(f,"80");
}