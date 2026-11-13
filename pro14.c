#include <stdio.h>

int main() {
    int arr[10];
    int size = 5;
    int i, num;

    printf("Enter 5 elements:\n");
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to insert at the last position: ");
    scanf("%d", &num);

    // No shifting required! Just place the number at the next available index and increase size.
    arr[size] = num;
    size++;

    printf("\nArray after insertion:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
