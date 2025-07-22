#include<stdio.h>
int main()
{
    int s,m,h;
    printf("\nEnter a second:");
    scanf("%d",&s);
    printf("\nEnter a minute:");
    scanf("%d",&m);
    printf("\nEnter a hour:");
    scanf("%d",&h);
    if(s<60 && m<60 && h<60)
    {
        printf("Time is valid");
    }
    else
    {
        printf("Time is not valid");
    }
}