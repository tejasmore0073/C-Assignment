#include<stdio.h>
int main()
{
    float l,b,h,sa,volume;
    printf("Enter length,bredth and height=");
    scanf("%f%f%f",&l,&b,&h);
    sa=2*(l*b)+(l*h)+(b*h);
    printf("Surface area=%f\n",sa);
    volume=l*b*h;
    printf("Volume=%f",volume);
    return 0;
}