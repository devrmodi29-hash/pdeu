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

    // Decrease the logical size of the array to drop the last element
    size--;

    printf("\nArray after deleting the last element:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
