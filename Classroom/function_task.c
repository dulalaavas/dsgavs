#include <stdio.h>

int add(int, int);
void sub(int, int);    
int mul(int, int);

int main(){
    int first,second,choice;
    
    char c;
    come_here:
    
    printf("Chose option(1-3) \n");
    printf("1. Addition \n2. Subtraction \n3. Multiplication \n");
    scanf("%d",&choice);
    if (choice <= 3 && choice > 0){
        printf("Enter first number: ");
        scanf("%d",&first);
        
        printf("Enter second number: ");
        scanf("%d",&second);

        switch (choice){
        case 1:{
            int sum = add(first, second);
            printf("The sum is %d \n", sum );
            break;}
        case 2:
            sub(first, second);
            break;
        case 3:{
            int product = mul(first, second);
            printf("The product is %d \n", product);
            break;}
        default:
            break;
        }

    }else{
        printf("Invalid choice \n");
    }
    

printf("Continue? (y/n) \n");
scanf(" %c", &c);
if(c=='y'){
    goto come_here;
}
}
int add(int a, int b){
    return a+b;
}
void sub(int a, int b){
    printf("Sub is %d", a-b);
}
int mul(int a, int b){
    return a*b;
}