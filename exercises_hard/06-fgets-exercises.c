#include <stdio.h>
#include <string.h>

int main() {
    char fullName[100], firstName[50], lastName[50];

    printf("Enter your full name: ");
    fgets(fullName, sizeof(fullName), stdin);

    // Remove newline character
    fullName[strcspn(fullName, "\n")] = '\0';

    // Split the name into first and last
    sscanf(fullName, "%s %s", firstName, lastName);

    printf("First Name: %s\n", firstName);
    printf("Last Name: %s\n", lastName);

    return 0;
}
