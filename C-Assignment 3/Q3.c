#include<stdio.h>
int main()
{
    int x,y,ch,z,v;
    printf("\n1.Equality\n2.Less than\n3.Quotient and Remainder\n4.Range\n5.Swap\nEnter your choice=");
    scanf("%d",&ch);
    printf("Enter a numbers=");
    scanf("%d%d",&x,&y);
    switch(ch)
    {
       case 1:if(x==y)
              printf("Equal");
              else
              printf("not Equal");
              break;
       case 2 :if(x<y) 
               printf("x is less than y");
               else
               printf("x is greater than y");
               break;
       case 3:z=x/y;
              printf("\nQuotient=%d",z);
              z=x%y;
              printf("\nRemainder=%d",z);
              break;
       case 4:printf("\nEnter a number=");
              scanf("%d",&v);
              if(x<v && v<y)
              printf("is in between two numbers");
              else
              printf("Not between");
              break;
       case 5:x=x+y;
              y=x-y;
              x=x-y;
              printf("Swap numbers=%d %d",x,y);
              break;
       default:printf("Invalid");
    }
}