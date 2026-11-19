#include<stdio.h>

void main()
{
    int i,n;

    printf("ENTER N");
    scanf("%d",&n);

    for(i=1;i<=n;i+=2)
    {
        printf("%d\n",i);
    }
}

