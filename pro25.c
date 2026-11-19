#include <stdio.h>

int main() {
    int num, original, rem, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Not a palindrome number.\n");
        return 0;
    }

    original = num;

    while (num > 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    if (original == rev) {
        printf("Palindrome number.\n");
    } else {
        printf("Not a palindrome number.\n");
    }

    return 0;
}
