#include <stdio.h>

int main() {
    int arr[10];
    int size = 5;
    int i, num, pos;

    printf("Enter 5 elements:\n");
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to insert: ");
    scanf("%d", &num);

    printf("Enter the position (1 to %d): ", size + 1);
    scanf("%d", &pos);

    int index = pos - 1;

    // Shift elements to the right from the end to make space
    for (i = size; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new number and increase the size count
    arr[index] = num;
    size++;

    printf("\nArray after insertion:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
