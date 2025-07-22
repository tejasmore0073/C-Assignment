#include<stdio.h>
int main()
{
    int n,fine;
    printf("\nEnter a  days=");
    scanf("%d",&n);
    if(n<=5)
    fine=100;
    else if(n<=10)
    fine=300;
    else if(n>10)
    fine=500;

    printf("\nLibrary Charges=%d",fine);
    return 0;
}