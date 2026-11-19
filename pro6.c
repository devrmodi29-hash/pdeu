#include<stdio.h>
void main()
{
    int m1,m2,m3,total;
    float avg;
     printf("ENTER A MARKS OF 1 SUBJECT\n");
    scanf("%d",&m1);
     printf("ENTER A MARKS OF 1 SUBJECT\n");
    scanf("%d",&m2);
     printf("ENTER A MARKS OF 1 SUBJECT\n");
    scanf("%d",&m3);
    total=m1+m2+m3;
    avg=total/3.0;
    if(avg>=70)
    {
        printf("DISTINCTION\n");
    }
    else if(avg>=60 && avg<70)
    {
        printf("FIRST CLASS\n");
    }
    else if(avg>=50 && avg<60)
    {
        printf("SECOND CLASS\n");
    }
    else if(avg>=35 && avg<50)
    {
      printf("THIRD CLASS\n");
    }
    else{
        printf("FAIL\n");
    }
    printf("TOTAL= %d\n",total);
    printf("AVERAGE= %f",avg);
}
