#include <stdio.h>

int main() {
    int balance = 5000;   // Initial balance
    int withdraw;
    char choice;
    printf("Welcome to the National Bank of Bharat ATM\n");
    do {
        printf("\nYour current balance: ₹%d\n", balance);
        printf("Enter the amount you wish to withdraw: ₹");
        scanf("%d", &withdraw);

        if (withdraw <= balance && withdraw > 0) {
            balance -= withdraw;
            printf("Transaction successful! Remaining balance: ₹%d\n", balance);
        } else if (withdraw <= 0) {
            printf("Invalid amount. Please enter a positive value.\n");
        } else {
            printf("Insufficient balance.\n");
        }
        printf("\nDo you want to make another transaction? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("\nThank you for using the ATM. Have a nice day!\n");

    return 0;
}
