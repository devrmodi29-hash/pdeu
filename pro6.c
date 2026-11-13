#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    while (str1[i] == str2[i]) {
        if (str1[i] == '\0') {
            break;
        }
        i++;
    }

    if (str1[i] == str2[i]) {
        printf("Both strings are same.\n");
    } else if (str1[i] > str2[i]) {
        printf("First string is greater.\n");
    } else {
        printf("First string is lower.\n");
    }

    return 0;
}
