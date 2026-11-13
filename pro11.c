#include <stdio.h>

int main() {
    int arr[10], res[10];
    int i, n, direction;

    printf("Enter 10 elements:\n");
    for (i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter direction (1 for Left Shift, 2 for Right Shift): ");
    scanf("%d", &direction);

    printf("Enter number of positions to shift: ");
    scanf("%d", &n);

    // Initialize result array with 0 (this handles padding automatically)
    for (i = 0; i < 10; i++) {
        res[i] = 0;
    }

    if (direction == 1) {
        // Left Shift logic
        for (i = 0; i < 10; i++) {
            if (i - n >= 0) {
                res[i - n] = arr[i];
            }
        }
    } else if (direction == 2) {
        // Right Shift logic
        for (i = 0; i < 10; i++) {
            if (i + n < 10) {
                res[i + n] = arr[i];
            }
        }
    } else {
        printf("Invalid choice!\n");
        return 0;
    }

    printf("\nResultant Array after Shifting:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", res[i]);
    }
    printf("\n");

    return 0;
}
