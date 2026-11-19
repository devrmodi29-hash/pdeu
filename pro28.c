#include <stdio.h>

int main() {
    int num, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("Not a perfect number.\n");
        return 0;
    }

    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum = sum + i;
        }
    }

    if (sum == num) {
        printf("Perfect number.\n");
    } else {
        printf("Not a perfect number.\n");
    }

    return 0;
}
