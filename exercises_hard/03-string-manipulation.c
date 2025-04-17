#include <stdio.h>
#include <string.h>

int main() {
    char str[100], reversed[100];
    int len, i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str) - 1;  // Remove newline character from input
    str[len] = '\0';  // Null-terminate the string

    // Reverse the string
    for (i = len - 1, j = 0; i >= 0; i--, j++) {
        reversed[j] = str[i];
    }
    reversed[j] = '\0';

    printf("Reversed string: %s\n", reversed);

    return 0;
}
