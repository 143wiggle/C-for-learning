#include <stdio.h>

int main() {
    int i, j, rows;

    printf("Enter the number of rows for the triangle: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
