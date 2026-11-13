#include <stdio.h>

int main() {
    int arr[10];
    int size = 5;
    int i;

    printf("Enter 5 elements:\n");
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Shift all elements one position to the left to overwrite the first element
    for (i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Reduce the logical size of the array
    size--;

    printf("\nArray after deleting the first element:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
