#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any thing=");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
    {
        printf("\nUppercase");
    }
    else if(ch>=97 && ch<=122)
    {
        printf("\nLowercase");
    }
    else if(ch>=48 && ch<=57)
    {
        printf("\nDigit");
    }
    else{
        printf("\nSpecial symbol");
    }
    return 0;
}