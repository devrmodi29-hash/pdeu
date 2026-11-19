#include <stdio.h>

int main() {
    int num, i, first = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        num = -num;
    }

    if (num == 0) {
        printf("Every non-zero integer is a factor of 0.\n");
        return 0;
    }

    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            if (!first) {
                printf(",");
            }
            printf("%d", i);
            first = 0;
        }
    }
    printf("\n");

    return 0;
}
