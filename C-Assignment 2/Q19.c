#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter a lowercase alphabet=");
    scanf("%c",&ch);
    ch=toupper(ch);
    printf("\nUppercase Letter=%c",ch);
    ch=tolower(ch);
    printf("\nLowercase Letter=%c",ch);
    return 0;

}