#include<stdio.h>
int main()
{
    float a,b,AM,HM;
    printf("Enter the two numbers");
    scanf("%f%f",&a,&b);
    AM=(a+b)/2;
    printf("Arithmatic mean=%f\n",AM);
    HM=(a*b)/(a+b);
    printf("Harmonic mean=%f",HM);
    return 0;
}