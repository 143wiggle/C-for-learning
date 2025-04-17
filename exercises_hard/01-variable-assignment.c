#include <stdio.h>

int main() {
    int a, b, result;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    result = a + b;  // Add the numbers
    printf("Sum of %d and %d: %d\n", a, b, result);
    
    result *= 3;  // Multiply the sum by 3
    printf("Multiplying the sum by 3: %d\n", result);

    return 0;
}
