#include<stdio.h>
// int main(){ //swap variables
    // int a = 10;
    // int b = 20;
    // printf("The value of a is %d \n", a);
    // printf("The value of b is %d \n", b);
    // int c = a;
    // a = b;
    // b = c;
    // printf("The new value of a is %d \n", a);
    // printf("The new value of b is %d \n", b);
    // }

// void swap(int *a, int *b); //swap using pointer
// int main(){
//     int a = 10;
//     int b = 20;
//     int *c = &a;
//     int *d = &b;
//     printf("Value of a is: %d \n", a);
//     printf("Value of b is: %d \n", b);
//     swap(c,d);
//     printf("New value of a is: %d \n", a);
//     printf("New value of b is: %d \n", b);
// }
// void swap(int *a, int *b){
//     int x;
//     x = *a;
//     *a = *b;
//     *b = x;
// }

//print Fibonacci series using recursion
// void fibo(int);
// int main() {
//     int a = 0, b = 1, count =5;
//     printf("%d \n%d \n",a,b);
//     fibo(count -2);
// }
// void fibo(int num){
//     static int a = 0, b = 1,c;
//     if (num > 0){
//         c = a + b;
//         printf("%d \n",c);
//         a=b;
//         b=c;
//         fibo(num-1);
//     }
// }

//check palindrome numbers
// int palindrome(int);
// int main(){
//     int num;
//         printf("Enter any number:");
//         scanf("%d",&num);
//         if (palindrome(num)){
//             printf("It is palindrome.");
//         }else{
//             printf("It is not palindrome.");
//         }
// }
// int palindrome(int num){
//     int ori = num;
//     int rev = 0;
//     while(num > 0){
//         int dig = num % 10;
//         rev = (rev * 10) + dig;
//         num = num / 10;
//     }
//     return ori==rev;
// }

//print all natural number using recursion
// void printNaturalNumbers(int n) {
//     if (n > 0) {
//         printNaturalNumbers(n - 1); 
//         printf("%d ", n); 
//     }
// }
// int main() {
//     int limit;
//     printf("Enter the limit up to which you want to print natural numbers: ");
//     scanf("%d", &limit);
//     printf("Natural numbers from 1 to %d are: ", limit);
//     printNaturalNumbers(limit); 
//     printf("\n");
//     return 0;
// }

// to calculate factorial using recursion
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
void print_factorials(int limit) {
    for (int i = 1; i <= limit; i++) {
        printf("Factorial of %d is %d\n", i, factorial(i));
    }
}
int main() {
    int limit;
    printf("Enter the limit for natural numbers: ");
    scanf("%d", &limit);
    print_factorials(limit);
    return 0;
}

