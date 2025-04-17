#include <stdio.h>

int main() {
    char department[50];
    int age;
    int current_year;
    int birth_year;

    printf("Enter your department: ");
    scanf("%s", department);  // Reads one-word department

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter the current year: ");
    scanf("%d", &current_year);

    birth_year = current_year - age;

    printf("\nYou are from the %s department.\n", department);
    printf("You are %d years old, and you were born in %d.\n", age, birth_year);

    return 0;
}
