#include<stdio.h>

void main()
{
    int a,b,c;

    printf("ENTER THE VALUE OF A\n");
    scanf("%d",&a);

    printf("ENTER THE VALUE OF B\n");
    scanf("%d",&b);

    printf("ENTER THE VALUE OF C\n");
    scanf("%d",&c);


    if(a>b)
    {
        if(a>c)
        {
            printf("A IS THE GREATEST\n");
        }
        else
        {
            printf("C IS THE GREATEST\n");
        }
    }
    else
    {
        if(b>c)
        {
            printf("B IS THE GREATEST\n");
        }
        else
        {
            printf("C IS THE GREATEST\n");
        }
    }


    if(a<b)
    {
        if(a<c)
        {
            printf("A IS THE SMALLEST\n");
        }
        else
        {
            printf("C IS THE SMALLEST\n");
        }
    }
    else
    {
        if(b<c)
        {
            printf("B IS THE SMALLEST\n");
        }
        else
        {
            printf("C IS THE SMALLEST\n");
        }
    }
}
