#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a three numbers=");
    scanf("%d%d%d",&a,&b,&c);
    (a>b && a>c)? printf("\na is maximum=%d",a):(b>a && b>c) ? printf("\nb is maximum=%d",b):printf("\nc is maximum=%d",c);
    (a<b && a<c)? printf("\na is minimum=%d",a):(b<a && b<c) ? printf("\nb is minimum=%d",b):printf("\nc is minimum=%d",c);
    return 0;
}

