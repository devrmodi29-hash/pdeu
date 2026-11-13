#include <stdio.h>

int main() {
    int arr[10];
    int size = 5;
    int i, val, index = -1;

    printf("Enter 5 elements:\n");
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to delete: ");
    scanf("%d", &val);

    for (i = 0; i < size; i++) {
        if (arr[i] == val) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        printf("\nValue not found in the array!\n");
    } else {
        for (i = index; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;

        printf("\nArray after deleting %d:\n", val);
        for (i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
