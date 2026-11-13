#include <stdio.h>

int main() {
    int amount;
    int notes[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int totalNotes = 0;

    printf("Enter amount: ");
    scanf("%d", &amount);

    printf("\nBreakdown:\n");
    for (int i = 0; i < 9; i++) {
        if (amount >= notes[i]) {
            int count = amount / notes[i];
            totalNotes += count;
            printf("%d note(s) of %d Rs.\n", count, notes[i]);
            amount %= notes[i];
        }
    }

    printf("\nTotal minimum notes required: %d\n", totalNotes);

    return 0;
}
