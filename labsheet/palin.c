#include <stdio.h>
#include <string.h>
//palindrome checker
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s",str);
    if(strcmp(str,reverseString(str))==0)
    printf("\n%s is palindromic.",str);
    else
    printf("\n%s is not palindromic.",str);
    return 0;
    }
