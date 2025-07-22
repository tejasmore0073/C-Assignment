#include<stdio.h>
int main()
{
    float radius,area,coc;
    printf("Enter radius of circle");
    scanf("%f",&radius);
    area=3.14*(radius*radius);
    printf("Area of circle=%f\n",area);
    coc=2*(3.14*radius);
    printf("Circumference of circle=%f",coc);
    return 0;
}
