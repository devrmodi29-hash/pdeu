#include<stdio.h>
void main()
{
    float gross,net,dis;
     printf("ENTER THE GROSS SALES\n");
    scanf("%f",&gross);
    if(gross>20000)
    {
        dis=gross*0.15;
    }
    else if(gross>10000)
    {
        dis=gross*0.1;
    }
    else
    {
        dis=gross*0.05;
    }
    net=gross-dis;
    printf("THE NET SALES ARE: %f",net);
}
