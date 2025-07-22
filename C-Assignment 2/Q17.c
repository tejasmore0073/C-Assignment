#include<stdio.h>
int main()
{
    int p1,p2,p3,q1,q2,q3,total,discount,discount_amount,total_pay;
    char i1[100],i2[100],i3[100];
    printf("\nEnter Item 1= ");
    scanf("%s",&i1);
    printf("\nEnter Price 1= ");
    scanf("%d",&p1);
    printf("\nEnter Quantity 1= ");
    scanf("%d",&q1);

    printf("\nEnter Item 2= ");
    scanf("%s",&i2);
    printf("\nEnter Price 2= ");
    scanf("%d",&p2);
    printf("\nEnter Quantity 2= ");
    scanf("%d",&q2);

    printf("\nEnter Item 3= ");
    scanf("%s",&i3);
    printf("\nEnter Price 3= ");
    scanf("%d",&p3);
    printf("\nEnter Quantity 3= ");
    scanf("%d",&q3);

    total=(p1*q1)+(p2*q2)+(p3*q3);
    if(total>100000)
    discount=20;
    else if(total>80000)
    discount=15;
    else if(total>50000)
    discount=10;
    else if(total>30000)
    discount=8;
 
    discount_amount=(total - discount)/100;
    total_pay=total-discount_amount;
    printf("\n.....................Item Details...............");
    printf("\n||  Item ||  Price  ||  Quantity  || Total  ||");
    printf("\n%7s|%9d|%12d|%8d",i1,p1,q1,(p1*q1));
    printf("\n%7s|%9d|%12d|%8d",i2,p2,q2,(p2*q2));
    printf("\n%7s|%9d|%12d|%8d",i3,p3,q3,(p3*q3));

    printf("\nTotal=%d",total);
    printf("\nDiscount=%d",discount);
    printf("\nDiscount Amount=%d",discount_amount);
    printf("\nTotal Pay Amont=%d",total_pay);
    
}