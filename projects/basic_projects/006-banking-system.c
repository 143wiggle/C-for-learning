#include <stdio.h>

int main() {
    float balance = 0.0;
    int choice;
    float amount;

    while (1) {
        printf("\n--- Welcome to CLI Banking System ---\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            // Deposit
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            if (amount > 0) {
                balance = balance + amount;
                printf("Deposited: %.2f\n", amount);
            } else {
                printf("Invalid amount. Deposit failed.\n");
            }
        } else if (choice == 2) {
            // Withdraw
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if (amount > 0 && amount <= balance) {
                balance = balance - amount;
                printf("Withdrawn: %.2f\n", amount);
            } else {
                printf("Invalid amount or insufficient funds.\n");
            }
        } else if (choice == 3) {
            // Check Balance
            printf("Current Balance: %.2f\n", balance);
        } else if (choice == 4) {
            // Exit
            printf("Thank you for using our banking system.\n");
            return 0;
        } else {
            printf("Invalid choice. Please select from 1 to 4.\n");
        }
    }

    return 0;
}
