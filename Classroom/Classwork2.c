#include<stdio.h>
int swap(int *a, int *b){

}
int main(){
    int *a = 10;
    int *b = 20;

    printf("The value of a is %d \n", a);
    printf("The value of b is %d \n", b);

    int c = a;
    a = b;
    b = c;

    printf("The new value of a is %d \n", a);
    printf("The new value of b is %d \n", b);
}
int swap(int *a, int *b){
    
}