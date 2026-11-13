#include <stdio.h>

int main() {
    char str[100];
    int i, count[5] = {0};

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }
        if (ch == 'a') count[0]++;
        else if (ch == 'e') count[1]++;
        else if (ch == 'i') count[2]++;
        else if (ch == 'o') count[3]++;
        else if (ch == 'u') count[4]++;
    }

    printf("Frequency of vowels:\n");
    printf("a: %d\n", count[0]);
    printf("e: %d\n", count[1]);
    printf("i: %d\n", count[2]);
    printf("o: %d\n", count[3]);
    printf("u: %d\n", count[4]);

    return 0;
}
