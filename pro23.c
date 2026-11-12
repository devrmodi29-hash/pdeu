#include<stdio.h>

void main()
{
    int m1,m2,m3,total;
    float avg;
    printf("ENTER THE MARKS OF THREE SUBJECT: \n");
    scanf("%d %d %d",&m1,&m2,&m3);
    total=m1+m2+m3;
    avg=total/3.0;
    printf("THE TOTAL OF THREE SUBJECTS IS: %d",total);
printf("THE AVERAGE OF THREE SUBJECTS IS: %f",avg);

}
