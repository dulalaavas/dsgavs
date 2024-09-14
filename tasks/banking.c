#include <stdio.h>

int main() {
    float balance = 10000.0, deposit, withdraw;
    int option;
        printf("Welcome to your bank account. \n");
        printf("Your current balance is Rs.%1.2f. \n", balance);
        printf("Enter 1 to deposit money. \n");
        printf("Enter 2 to withdraw money. \n");
        printf("Enter 3 to check your balance. \n");
        printf("Enter 4 to exit. \n");
        scanf("%d", &option);
        if (option == 1) { // Deposit amount
            printf("Enter amount to deposit: ");
            scanf("%f", &deposit);
            if (deposit > 0) { // Valid deposit amount
                balance += deposit;
                printf("Deposit successful. Your current balance is Rs.%1.2f. \n", balance);
            } else { // Invalid deposit amount
                printf("Invalid amount. Please try again. \n");
            }
        } else if (option == 2) { // Withdraw amount
            printf("Enter amount to withdraw: ");
            scanf("%f", &withdraw);
            if (withdraw > 0 && withdraw <= balance) { // Valid withdraw amount
                balance -= withdraw;
                printf("Withdrawal successful. Your current balance is Rs.%1.2f. \n", balance);
            } else { // Invalid withdraw amount
                printf("Invalid amount or insufficient balance. Please try again. \n");
            }
        } else if (option == 3) { // Check balance
            printf("Your current balance is Rs.%1.2f. \n", balance);
        } else if (option == 4) { // Exit
            printf("Thank you for using our services. \n");
        } else { // Invalid option
            printf("Invalid option. Please enter a number from 1 to 4. \n");
        }
}