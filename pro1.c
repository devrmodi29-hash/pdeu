
#include <stdio.h>

int main() {

    int arr[5];

    printf("Enter 5 integer values:\n");


    for (int i = 0; i < 5; i++) {
        printf("Value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }


    printf("\nYou entered the following values:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element at index %d = %d\n", i, arr[i]);
    }

    return 0;
}
