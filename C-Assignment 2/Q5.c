#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    if(n > 0)
    {
        if(n%5==0 && n%7==0)
        {
            printf("\nNo is divisible by 5 and 7");
        }
        else
        {
            printf("\nNo is not divisible by 5 and 7");
        }
    
    }
        else
        {
            printf("\nNo is Negative");
        }
}