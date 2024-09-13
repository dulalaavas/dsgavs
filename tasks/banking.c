#include<stdio.h>
int main(){
    //bank account with initial Rs.10000 and able to deposit and withdraw
    float balance = 10000, deposit, withdraw, check_balance, exit;
    int option;
        printf("Welcome to your bank account. \n");
        printf("Your current balance is Rs.10000. \n");
        printf("Enter 1 to deposit money. \n");
        printf("Enter 2 to withdraw money. \n");
        printf("Enter 3 to check your balance. \n");
        printf("Enter 4 to exit. \n");
        scanf("%d", &option);
        if (option == 1){ //deposit amount
            printf("Enter amount to deposit: ");
            scanf("%f", &deposit);
            if (deposit > 0){ //valid deposit amount
                balance += deposit;
                printf("Your current balance is Rs.%1.3f. \n", balance);
            }else{ //invalid deposit amount
                printf("Invalid amount. Please try again. \n");
                printf("Your current balance is Rs.%1.3f. \n", balance);
            }
        }else if(option == 2);{ //withdraw amount
                printf("Enter amount to withdraw: ");
                scanf("%f", &withdraw);
                if (withdraw > 0 && withdraw <= balance){ //valid withdraw amount 
                    balance -= withdraw;
                    printf("Your current balance is Rs.%1.3f. \n", balance);
                }else{ //invalid withdraw amount
                    printf("Invalid amount. Please try again. \n");
                    printf("Your current balance is Rs.%1.3f. \n", balance);
                    }
        }else if(option == 3);{ // check balance
            printf("Your current balance is Rs.%1.3f. \n", balance);
        }else if(option == 4);{ //exit
            printf("Thank you for using our services. \n");
        }else{ //invalid option
            printf("Enter number from 1 to 4");
        }
}