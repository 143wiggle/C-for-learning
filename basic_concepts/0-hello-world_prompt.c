#include <stdio.h>

int main() {
    char name[50];  // Variable to store user input
    
    // Prompt the user to enter their name
    printf("Enter your name: ");
    scanf("%s", name);
    
    // Greet the user with their name
    printf("Hello, %s!\n", name);
    
    return 0;
}
