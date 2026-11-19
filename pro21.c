#include <stdio.h>

int main() {
    int num, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        num = -num;
    }

    if (num == 0) {
        printf("0\n");
        return 0;
    }

    while (num > 0) {
        rem = num % 10;
        printf("%d", rem);
        num = num / 10;
        if (num > 0) {
            printf(",");
        }
    }
    printf("\n");

    return 0;
}
