#include<stdio.h>
int main()
{
    float r,aoc,coc,v;
    int ch;
    printf("\nEnter Choice=");
    scanf("%d",&ch);
    printf("Input radius=");
    scanf("%f",&r);
    switch(ch)
    {
        case 1:aoc=3.14*(r*r);
               printf("Area of circle=%.2f",aoc);
               break;
        case 2:coc=2*(3.14*r);
               printf("Circumference of circle=%.2f",coc);
               break;
        case 3:v=4/3*3.14*(r*r*r);
               printf("Volume of Sphere=%.2f",v);
               break;
        case 4:printf("Invalid Choice");
        
    }
}