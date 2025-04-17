#include <stdio.h>

int main() {
    int i, j;

    // Print a message indicating the table range
    printf("Multiplication table (1-10):\n");

    // Outer loop (rows)
    for (i = 1; i <= 10; i++) {  // Loop from 1 to 10 for rows
        // Inner loop (columns)
        for (j = 1; j <= 10; j++) {  // Loop from 1 to 10 for columns
            // Print the product of i (row number) and j (column number)
            printf("%4d", i * j);  // %4d ensures the numbers are neatly aligned
        }
        // Print a newline after each row of the table
        printf("\n");
    }

    return 0;
}
