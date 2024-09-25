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
        // Generates Fibonacci series correctly for a given number of terms

void fibo(int);
int main() {
    int a = 0, b = 1, count =5;
    printf("%d \n%d \n",a,b);
    fibo(count -2);
}
void fibo(int num){
    static int a = 0, b = 1,c;
    if (num > 0){
        c = a + b;
        printf("%d \n",c);
        a=b;
        b=c;
        fibo(num-1);
    }
}