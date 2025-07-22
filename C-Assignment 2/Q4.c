#include<stdio.h>
int main()
{
    int c,s,profit,loss;
    printf("Enter Cost price");
    scanf("%d",&c);
    printf("Enter Selling price");
    scanf("%d",&s);
    if(s>c)
    {
    profit=s-c;
    printf("Profit=%d",profit);
    }
    else{
    loss=c-s;
    printf("Loss=%d",loss);
    }
    return 0;
}