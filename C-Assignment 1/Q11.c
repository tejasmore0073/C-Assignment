#include<stdio.h>
int main()
{
    float h,w,l,w1,w2,d1,d2,painted,whitewashed;

    printf("\nEnter the dimension of room");
    printf("\nEnter the height of room=");
    scanf("%f",&h);
    printf("\nEnter the width of room=");
    scanf("%f",&w);
    printf("\nEnter the length of room=");
    scanf("%f",&l);

    printf("\nEnter dimension of door");
    printf("\nEnter the height of door=");
    scanf("%f",&d1);
    printf("\nEnter the length of door=");
    scanf("%f",&d2);

    printf("\nEnter the dimension of window");
    printf("\nEnter the height of window=");
    scanf("%f",&w1);
    printf("\nEnter the length of window=");
    scanf("%f",&w2);

    painted=(2*(l+h)*h-(d1*d2)-2*(w1-w2));
    whitewashed=(l*w);
    printf("\nPainted area %.2f",painted);
    printf("\nWhitewashed area %.2f",whitewashed);
    return 0;

}