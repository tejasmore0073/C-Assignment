#include<stdio.h>
int main()
{
    int bs,tax;
    printf("\nEnter a basic salary=");
    scanf("%d",&bs);
    if(bs>300000)
    tax=30;
    else if(bs>150000)
    tax=20;
    else if(bs<150000)
    tax=0;
    printf("\nIncome tax=%d",tax);
    return 0;
}