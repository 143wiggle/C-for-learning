#include <stdio.h>

int main() {
    int rows = 5; // Number of rows in the pattern

    // Outer loop controls the number of rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop controls the number of stars per row
        for (int j = 1; j <= i; j++) {
            printf("* "); // Print star with space
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
