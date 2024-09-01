#include <stdio.h>
#include <ctype.h>
int main()
{
    char s[45];
    int i,j,len;
    printf("Enter the word to be checked: ");
    scanf("%s",&s);
    for(i=(s[len=0]);i!='\0';i=(s[++len])); //count num of chars
    
//If palindrome: final i=len, else: final i=len+1; print output accordingly
    for(i=0;(i=(toupper(s[i])==toupper(s[len-i-1]))?i:len+1)<len;i++);
    (i==len)?printf("'%s' is a palindrome.\n",s):printf("'%s' is not a palindrome.\n",s);
}