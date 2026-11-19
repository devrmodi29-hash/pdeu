#include <stdio.h>

int main() {
    int num, temp, square, powerOfTen = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Not an automorphic number.\n");
        return 0;
    }

    temp = num;
    while (temp > 0) {
        powerOfTen = powerOfTen * 10;
        temp = temp / 10;
    }

    square = num * num;

    if (square % powerOfTen == num) {
        printf("Automorphic number.\n");
    } else {
        printf("Not an automorphic number.\n");
    }

    return 0;
}
