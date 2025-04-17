#include <stdio.h>

int main() {
    int i, j;
    
    printf("Multiplication table (1-10):\n");
    
    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= 10; j++) {
            printf("%4d", i * j);  // Print the product
        }
        printf("\n");
    }

    return 0;
}
