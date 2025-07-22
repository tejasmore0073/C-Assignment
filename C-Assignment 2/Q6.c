#include<stdio.h>
int main()
{
    int n;
    printf("Enter number=");
    scanf("%d",&n);
    if(n%5==0 || n%7==0)
    {
      printf("\nNo is divisible by 5 or 7");
    }
    else
    {
        printf("\nNo is not divisible by 5 or 7");
    }
    return 0;
    


}