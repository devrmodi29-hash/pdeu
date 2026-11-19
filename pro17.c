#include <stdio.h>

int main() {
    int i, num;
    int pos = 0, neg = 0, zero = 0;

    printf("Enter 200 integers:\n");
    for (i = 0; i < 200; i++) {
        scanf("%d", &num);
        if (num > 0) {
            pos++;
        } else if (num < 0) {
            neg++;
        } else {
            zero++;
        }
    }

    printf("Positive numbers: %d\n", pos);
    printf("Negative numbers: %d\n", neg);
    printf("Zeroes: %d\n", zero);

    return 0;
}
