#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a< c || a<b && a>c)
    {
        printf("%d is in between of %d %d",a,b,c);
    }
    else if(b>a && b<c || b<a && b>c)
    {
        printf("%d is in between of %d %d",b,a,c);
    }
    else{
        printf("%d is in between of %d %d",c,b,a);
    }
}