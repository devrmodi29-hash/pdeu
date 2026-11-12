#include<stdio.h>
void main()
{
    float net,gross,dis;
    printf("ENTER GROSS SALES: \n");
    scanf("%f",&gross);
    dis=0.1*gross;
    net=gross-dis;
    printf("NET SALES= %f",net);
}
