#include <stdio.h>

int main() {
    int count = 1, rows;

    // Ask the user how many rows to count
    printf("How many rows of counting would you like to see? ");
    scanf("%d", &rows);

    // Start counting based on user input
    printf("\nStarting count...\n");

    while (count <= rows) {
        printf("Count: %d\n", count);
        count++; // Increment count
    }

    printf("\nCounting complete. You've seen %d rows.\n", rows);

    return 0;
}
