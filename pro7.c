#include<stdio.h>

void main()
{
    int i,n,sum;
    sum=0;
    printf("ENTER N\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum=sum+i;
        //printf("%d\n",i);
    }
    printf("SUM OF NATURAL NUMBER= %d",sum);
}

