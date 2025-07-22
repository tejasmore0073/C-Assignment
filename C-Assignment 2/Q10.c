#include<stdio.h>
int main()
{
    int t1,t2,t3;
    printf("Enter three  numbers=");
    scanf("%d%d%d",&t1,&t2,&t3);
    if(t2+t3>t1 && t1+t3>t2 && t1+t2>3)
    
    printf("Traingle is valid");
    else
    printf("Traingle is not valid");
    return 0;
}