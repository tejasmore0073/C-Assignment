#include<stdio.h>
int main()
{
    int m1,m2,m3,total;
    char s1[100],s2[100],s3[300];
    float avg;
    printf("\nEnter a Marks of subject 1=");
    scanf("%d",&m1);
    printf("\nEnter Subject 1=");
    scanf("%s",&s1);
    printf("\nEnter a Marks of subject 2=");
    scanf("%d",&m2);
    printf("\nEnter Subject 2=");
    scanf("%s",&s2);
    printf("\nEnter a Marks of subject 3=");
    scanf("%d",&m3);
    printf("\nEnter Subject 3=");
    scanf("%s",&s3);
   
    total=m1+m2+m3;
    avg=total/3;
    if(avg<100)
    printf("Class I");
    else if( avg<90)
    printf("Class II");
    else if(avg>35)
    printf("Pass");
    else 
    printf("Fail");
    
    printf("Total Marks=%d",total);
    printf("Average=%f",avg);
    return 0;
}

