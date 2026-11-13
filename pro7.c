#include <stdio.h>

int main() {
    int a[4][4], t[4][4];
    int i, j;

    printf("Enter elements of 4x4 matrix:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Element a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Transpose logic: rows become columns and columns become rows
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            t[j][i] = a[i][j];
        }
    }

    printf("\nOriginal Matrix:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("\nTranspose of the Matrix:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}
