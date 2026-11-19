#include <stdio.h>

int main() {
    int i;
    char sex;
    int boys = 0, girls = 0;

    printf("Enter sex code for 50 students (M/m for Boy, F/f for Girl):\n");

    for (i = 0; i < 50; i++) {
        scanf(" %c", &sex);

        if (sex == 'M' || sex == 'm') {
            boys++;
        } else if (sex == 'F' || sex == 'f') {
            girls++;
        }
    }

    printf("Total Boys: %d\n", boys);
    printf("Total Girls: %d\n", girls);

    return 0;
}
