#include<stdio.h>
void main()
{
int sum,i;
i=1;
sum=0;
while(i<=100)
{
    if(i%13==0)
    {
      sum=sum+i;
    }
    i++;
}
printf("THE SUM OF ALL NOS DIVISIBLE BY 13 IS: %d",sum);
}

