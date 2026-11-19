#include<stdio.h>

void main()
{
    ;
    float gross,allow,deduc,net;

    printf("ENTER THE GROSS SALARY\n");
    scanf("%f",&gross);

    if(gross>10000)
    {
        allow=0.1*gross;
        deduc=0.03*gross;

    }
    else if(gross>5000)
    {
        allow=0.07*gross;
        deduc=0.02*gross;
    }
    else
    {
        allow=0;
        deduc=0;
    }
    net=gross+allow-deduc;
    printf("ALLOWANCE = %f\n", allow);
    printf("DEDUCTION = %f\n", deduc);
    printf("NET SALARY = %f", net);
}
