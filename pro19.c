#include <stdio.h>

int main() {
    int arr[10];
    int size = 5;
    int i, val, found = 0;

    printf("Enter 5 elements:\n");
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to search: ");
    scanf("%d", &val);

    // Linear search logic: checking each element one by one
    for (i = 0; i < size; i++) {
        if (arr[i] == val) {
            printf("\nValue %d found at position %d (index %d).\n", val, i + 1, i);
            found = 1;
            break; // Exit the loop once the value is found
        }
    }

    // If the flag 'found' is still 0, the value is not in the array
    if (!found) {
        printf("\nValue %d not found in the array.\n", val);
    }

    return 0;
}
