#include<stdio.h>
void main()
{
    float gross,allow,deduc,net;
    printf("ENTER YOUR GROSS SALARY: \n");
    scanf("%f",&gross);
    allow=0.1*gross;
    deduc=.03*gross;
    net=gross+allow-deduc;
    printf("NET SALARY: %f",net);
}
