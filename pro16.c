#include <stdio.h>

int main()
{
    float P, R, N, I;

    printf("Enter Principal: ");
    scanf("%f", &P);

    printf("Enter Rate: ");
    scanf("%f", &R);

    printf("Enter Time in years: ");
    scanf("%f", &N);

    I = (P * R * N) / 100;

    printf("Interest = %.2f", I);

    ;
}
