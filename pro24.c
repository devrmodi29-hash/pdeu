#include<stdio.h>
void main()
{
    int a,b,temp;
    printf("GIVE TWO VALUE:  \n");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("THE VALUE OF A IS: %d\n",a);
    printf("THE VALUE OF B IS: %d",b);
}
