#include<stdio.h>
void swap(int *a, int *b);
int main(){
    int a = 10;
    int b = 20;
    int *c = &a;
    int *d = &b;
    printf("Value of a is: %d \n", a);
    printf("Value of b is: %d \n", b);
    swap(c,d);
    printf("New value of a is: %d \n", a);
    printf("New value of b is: %d \n", b);
}
void swap(int *a, int *b){
    int x;
    x = *a;
    *a = *b;
    *b = x;
}