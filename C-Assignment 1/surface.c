#include<stdio.h>
int main()
{
    float r,h,area,volume;
    printf("Enter the dimension of cylindar=");
    scanf("%f%f",&r,&h);
    area=(2*3.14*r*r)+(2*3.14*r*h);
    printf("Surface area=%f\n",area);
    volume=(3.14*r*r*h);
    printf("Volume=%f",volume);
    return 0;
}