#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter numbers");
    scanf("%d%d",&a,&b);
    if(a==b)
    {
        printf("No is exactly compare");
    }
    else if(a>b)
    {
        
        printf("No  %d is greater than of %d",a,b);


    } 
    else if (a<b)
    {
        printf("No is %d is greater than of %d",b,a);
    }
    else
    {
        printf("Not compare");   
    }
    return 0;
}