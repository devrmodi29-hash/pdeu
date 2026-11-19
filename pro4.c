#include<stdio.h>

void main()
{
    int num;
    printf("ENTER A NUMBER\n");
    scanf("%d",&num);
    if(num%7==0)
    {
        printf("THE NUMBER IS DIVISIBLE BY 7");

    }
    else
    {
        printf("THE NUMBER IS NOT DIVISIBLE BY 7");
    }
}
