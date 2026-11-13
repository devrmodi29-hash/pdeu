#include <stdio.h>

int main() {

    int arr[10];

    printf("Enter 10 integer values:\n");


    for (int i = 0; i < 10; i++) {
        printf("Value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }



    printf("\n--- Specific Values Output ---\n");
    printf("4th value = %d\n", arr[3]);
    printf("7th value = %d\n", arr[6]);
    printf("9th value = %d\n", arr[8]);

    return 0;
}
