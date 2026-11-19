#include<stdio.h>

void main()
{
    int i,n,sum;
    sum=0;

    printf("ENTER N\n");
    scanf("%d",&n);

    for(i=1;i<=n;i+=2)
    {
        sum=sum+i;
        //printf("%d\n",i);
    }
    printf("SUM OF ODD NUMBERS= %d",sum);
}


