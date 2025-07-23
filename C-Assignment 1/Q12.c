#include<stdio.h>
int main()
{
    char ch;
    printf("\nEnter the character=");
    scanf("%c",&ch);

    printf("\nPrevious character=%c",ch-1);
    printf("\nNext character=%c",ch+1);
    
    return 0;
}