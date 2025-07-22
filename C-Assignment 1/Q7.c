#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the values of a and b");
    scanf("%d%d",&a,&b);
    printf("Before swapping + and - operator=%d %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swappeing + and - operator=%d %d\n",a,b);
    printf("Before swapping * and / operator=%d %d\n",a,b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("After swapping * and / operator=%d %d\n",a,b);
    return 0;
    
}