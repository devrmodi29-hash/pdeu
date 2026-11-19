#include <stdio.h>

void main()
{
    int i = 1, n, max, min;

    while(i <= 100)
    {
        printf("Enter number: ");
        scanf("%d", &n);

        if(i == 1)
        {
            max = n;
            min = n;
        }

        if(n > max)
        {
            max = n;
        }

        if(n < min)
        {
            min = n;
        }

        i++;
    }

    printf("Largest = %d\n", max);
    printf("Smallest = %d", min);
}
