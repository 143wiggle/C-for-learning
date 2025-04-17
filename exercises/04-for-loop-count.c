#include <stdio.h>

int main() {
    int iterations;

    // Brief explanation of iterations
    printf("Iterations: repeating a task using a loop.\n\n");

    // Ask the user how many iterations to loop
    printf("How many iterations would you like to do? ");
    scanf("%d", &iterations);

    // Loop through the number of iterations provided by the user
    printf("\nStarting the loop...\n");

    for (int i = 0; i < iterations; i++) {
        printf("You are doing iteration: %d\n", i);
    }

    printf("\nLoop complete. You've done %d iterations.\n", iterations);

    return 0;
}
