#include <stdio.h>
int main()
{
    int x=100,y=200,z=10;
    //char c[1000];
    printf("%d    %d\n",x++,++x);
    printf("%d    %d\n",++y,y++);
    printf("%d    \n",++z);
    printf("%d    \n",z++);
    printf("%d\n",(-10/5));
  //  scanf("%[^EOL]%*c",&c);
  //  printf("%s",c);
/*
    //Count num of chars in s; initialise w of correct length; put letters of s+eow in w
    for(i=(s[len=0]);i!='\0';i=(s[++len]));
    char w[len];
    for(i=-1;++i<=len;w[i]=s[i]);
    */
    printf("%d %d\n",x,y);
    y=y+x;
    x=y-x;
    y=y-x;
    printf("%d %d\n",x,y);
}