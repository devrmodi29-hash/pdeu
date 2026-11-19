#include<stdio.h>
void main()
{
    int num,sum,i,n;
    float mean;
    sum=0;i=1;
     printf("ENTER HOW MANY NUMBERS U WANT: ");
        scanf("%d",&n);
    while(i<=n)
    {
        printf("ENTER NUMBERS: ");
        scanf("%d",&num);

        sum=sum+num;
        mean=sum/n;
        i++;
    }
    printf("THE SUM OF ANY 10 NUMBER IS: %d\n",sum);
    printf("THE MEAN OF ANY 10 NUMBER IS: %f\n",mean);
}
