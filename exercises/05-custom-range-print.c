#include <stdio.h>

int main() {
    int start, end;

    printf("Enter start number: ");
    scanf("%d", &start);

    printf("Enter end number: ");
    scanf("%d", &end);

    for (int i = start; i <= end; i++) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}
