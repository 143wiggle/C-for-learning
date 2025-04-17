#include <stdio.h>

int main() {
    int height, i, j;
    printf("Enter the height of the Christmas tree (number of rows): ");
    scanf("%d", &height);

    for (i = 1; i <= height; i++) {
        // Print leading spaces
        for (j = 1; j <= height - i; j++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Print trunk
    for (i = 1; i <= 1; i++) {
        for (j = 1; j <= height - 1; j++) {
            printf(" ");
        }
        printf("|\n");
    }

    return 0;
}
