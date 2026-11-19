#include<stdio.h>
void main()
{
    int num,sum,i;
    float mean;
    sum=0;i=1;
    while(i<=10)
    {
        printf("ENTER ANY 10 NUMBERS: ");
        scanf("%d",&num);

        sum=sum+num;
        mean=sum/10;
        i++;
    }
    printf("THE SUM OF ANY 10 NUMBER IS: %d\n",sum);
    printf("THE MEAN OF ANY 10 NUMBER IS: %f\n",mean);
}
