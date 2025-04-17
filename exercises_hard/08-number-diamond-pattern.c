#include <stdio.h>

int main() {
    int i, j, space, num, height;

    printf("Enter the height of the diamond (max number in the middle): ");
    scanf("%d", &height);

    // Upper half
    for (i = 1; i <= height; i++) {
        // Print leading spaces
        for (space = 1; space <= height - i; space++) {
            printf(" ");
        }
        // Print increasing numbers
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // Print decreasing numbers
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }

    // Lower half
    for (i = height - 1; i >= 1; i--) {
        // Print leading spaces
        for (space = 1; space <= height - i; space++) {
            printf(" ");
        }
        // Print increasing numbers
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // Print decreasing numbers
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
