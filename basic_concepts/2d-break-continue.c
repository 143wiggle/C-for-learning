#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue;  // Skip number 5
        }

        if (i == 8) {
            break;  // Stop the loop when i is 8
        }

        printf("%d\n", i);
    }

    return 0;
}
