#include <stdio.h>

int main(){
    int first,second,choice;
    printf("Chose option(1-3) \n");
    printf("1. Addition \n2. Subtraction \n3. Multiplication \n");
    scanf("%d",&choice);

    if (choice <= 3 && choice > 0){
        printf("Enter first number: ");
        scanf("%d",&first);
        
        printf("Enter second number: ");
        scanf("%d",&second);

    }else{
        printf("Invalid choice \n");
    }
}