#include <stdio.h>

int main() {
    int src[5];
    int dest[10] = {0};
    int i;

    printf("Enter 5 elements for the source array:\n");
    for (i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &src[i]);
    }

    for (i = 0; i < 5; i++) {
        dest[i * 2] = src[i];
    }

    printf("\nSource Array:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", src[i]);
    }

    printf("\n\nDestination Array (10 elements with skipped slots):\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", dest[i]);
    }
    printf("\n");

    return 0;
}
