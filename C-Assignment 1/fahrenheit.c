#include<stdio.h>
int main()
{
    float f,c,k;
    printf("Enter the fahrenheit=");
    scanf("%f",&f);
    c=(5.0/9.0)*(f-32);
    printf("Celcius=%f\n",c);
    k=c+273.15;
    printf("Kelvin=%f\n",k);
    return 0;
}