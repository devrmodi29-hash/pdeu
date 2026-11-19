#include<stdio.h>

void main()
{
    int i,n,sum;
    sum=0;

    printf("ENTER N\n");
    scanf("%d",&n);

    for(i=0;i<=n;i+=2)
    {
        sum=sum+i;
        //printf("%d\n",i);
    }
    printf("SUM OF EVEN NUMBERS= %d",sum);
}


