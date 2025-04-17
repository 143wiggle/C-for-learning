#include <stdio.h>

int main() {
    int count = 1, rows;

    // Ask the user how many rows they'd like to have in their Excel sheet
    printf("How many rows would you like to have in your Excel sheet? ");
    scanf("%d", &rows);

    // Start counting based on user input
    printf("\nStarting count...\n");

    while (count <= rows) {
        printf("Row: %d\n", count);
        count++; // Increment count
    }

    printf("\nYou have %d rows in your Excel sheet.\n", rows);

    return 0;
}
