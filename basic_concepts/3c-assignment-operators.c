#include <stdio.h>

int main() {
    int num = 5;

    printf("Original value: %d\n", num);

    num += 3;
    printf("After += 3: %d\n", num);

    num -= 2;
    printf("After -= 2: %d\n", num);

    num *= 4;
    printf("After *= 4: %d\n", num);

    num /= 3;
    printf("After /= 3: %d\n", num);

    num %= 2;
    printf("After %%= 2: %d\n", num);

    return 0;
}
//purpose:
// Teaches: =, +=, -=, *=, /=, %=
