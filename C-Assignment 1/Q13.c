#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character=");
    scanf("%c",&ch);
    if(ch>=48 && ch<=57 || ch>=65 && ch<=90 || ch>=97 && ch<=122)
    printf("ASCII Value=%d",ch);
    else
    printf("Special character");
}