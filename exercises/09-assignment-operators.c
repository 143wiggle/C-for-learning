#include <stdio.h>

int main() {
    int num;

    printf("Let's explore how a number evolves through different assignments.\n");
    printf("Enter a starting number: ");
    scanf("%d", &num);

    printf("\nThink of this number as a value we’ll keep modifying over time.\n");

    printf("Original number: %d\n", num);

    num += 5;
    printf("We added 5 → (num += 5): Now it's %d\n", num);

    num -= 3;
    printf("Then we took away 3 → (num -= 3): Now it's %d\n", num);

    num *= 2;
    printf("We doubled it → (num *= 2): Now it's %d\n", num);

    num /= 4;
    printf("We divided it by 4 → (num /= 4): Now it's %d\n", num);

    num %= 3;
    printf("We got the remainder after dividing by 3 → (num %%= 3): Now it's %d\n", num);

    printf("\nEach step modifies the number based on a rule — like stages of transformation.\n");

    return 0;
}
