#include <stdio.h>

int main() {
    int arr[10];
    int size = 5;
    int i, pos;

    printf("Enter 5 elements:\n");
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to delete (1 to %d): ", size);
    scanf("%d", &pos);

    int index = pos - 1;

    // Shift elements to the left starting from the deletion index
    for (i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Decrease the logical size of the array
    size--;

    printf("\nArray after deletion:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
