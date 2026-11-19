#include <stdio.h>

int main() {
    int num, original, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Not an Armstrong number.\n");
        return 0;
    }

    original = num;

    while (num > 0) {
        rem = num % 10;
        sum = sum + (rem * rem * rem);
        num = num / 10;
    }

    if (original == sum) {
        printf("Armstrong number.\n");
    } else {
        printf("Not an Armstrong number.\n");
    }

    return 0;
}
