#include<stdio.h>
void main()
{
    int i=1;
    char name[50];
    printf("ENTER YOUR NAME");
    scanf("%s",name);
    while(i<=5)
    {
        printf("%s\n",name);
        i++;
    }
}
