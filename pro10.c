#include<stdio.h>
void main()
{
    int num,i,fac;
    fac=1;
    printf("ENTER A NUMBER");
    scanf("%d",&num);
    for(i=num;i>=1;i--)
    {
        fac=fac*i;
    }
    printf("THE FACTORIAL OF %d IS: %d",num,fac);
}
