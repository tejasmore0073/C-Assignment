#include<stdio.h>
int main()
{
    int a,b;
    char ch;
    printf("\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n");
    
    printf("Enter Expression=");
    scanf("%d%c%d",&a,&ch,&b);
    switch(ch)
    {
        case '+':printf("Addition=%d %c %d = %d",a,ch,b,(a+b));
               break;
        case '-':printf("Substraction=%d %c %d = %d",a,ch,b,(a-b));
               break;
        case '*':printf("Multiplication=%d %c %d = %d",a,ch,b,(a*b));
               break;
        case '/':printf("Division=%d %c %d = %d",a,ch,b,(a/b));
               break;
        default:printf("Invalid Choice");
    }
}