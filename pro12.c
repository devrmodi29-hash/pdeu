#include<stdio.h>
void main()
{
    int num;
    int i=1;
    char name[50];
    printf("ENTER YOUR NAME\n");
    scanf("%s",name);
    printf("ENTER NUMBER OF TIME YOU WANT TO PRINT\n");
    scanf("%d",&num);
    while(i<=num)
    {
        printf("%s\n",name);
        i++;
    }
}

