#include<stdio.h>
int main()
{
    float u,a,t,v,s;
    printf("Enter velocity, acceleration and time values=");
    scanf("%f%f%f",&u,&a,&t);
    v = u + a*t;
    printf(" final velocity =%f\n",v);
    s = u + a*(t*t);
    printf("Final distance=%f",s);
    return 0;
}