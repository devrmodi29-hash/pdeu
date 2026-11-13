#include <stdio.h>

int main() {
    int arr[6];
    int i, num;

    printf("Enter 5 elements:\n");
    for (i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to insert at the beginning: ");
    scanf("%d", &num);

    // Shift all elements one position to the right (starting from the back)
    for (i = 4; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }

    // Place the new number at the first position
    arr[0] = num;

    printf("\nArray after insertion (6 elements):\n");
    for (i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
