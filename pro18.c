#include<stdio.h>
void main()
{
    int l,b,area,peri;
    printf("ENTER LENGTH OF RECTANGLE");
    scanf("%d",&l);
    printf("ENTER BREADTH OF RECTANGLE");
    scanf("%d",&b);
    area=l*b;
    peri=2*(l+b);
    printf("AREA OF RECTANGLE= %d",area);
    printf("PERIMETER OF RECTANGLE= %d",peri);
}

