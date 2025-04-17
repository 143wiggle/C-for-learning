#include <stdio.h>

int main() {
    int x, y;

    printf("Let's explore how two numbers relate to each other.\n");
    printf("Enter the first number (x): ");
    scanf("%d", &x);

    printf("Enter the second number (y): ");
    scanf("%d", &y);

    printf("\nNow, let's compare x = %d and y = %d\n\n", x, y);

    printf("Is x equal to y? (x == y): %d → %s\n", x == y, x == y ? "Yes" : "No");
    printf("Is x not equal to y? (x != y): %d → %s\n", x != y, x != y ? "Yes" : "No");
    printf("Is x greater than y? (x > y): %d → %s\n", x > y, x > y ? "Yes" : "No");
    printf("Is x less than y? (x < y): %d → %s\n", x < y, x < y ? "Yes" : "No");
    printf("Is x greater than or equal to y? (x >= y): %d → %s\n", x >= y, x >= y ? "Yes" : "No");
    printf("Is x less than or equal to y? (x <= y): %d → %s\n", x <= y, x <= y ? "Yes" : "No");

    printf("\nEach result is either 1 (true) or 0 (false). It's like asking the computer logical questions.\n");

    return 0;
}
