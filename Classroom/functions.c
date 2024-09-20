#include<stdio.h>
#include<ctype.h>
/*
1. Functions with no parameter and no return type
2. Functions with parameter but no return type
3. Functions with no parameter but return type 1
4. Functions with parameter and return type
*/

#include<stdio.h>

void display();
void greet();

void addtion(int, int);
void subtraction(int, int);
int main(){
    display();
    greet();

    addtion(30, 20);
    subtraction(30, 20);
}


//function defination
void display(){
    
    printf("Hello World \n");
}

void greet(){
    printf("Welcome Sir! \n");
}

void addtion(int a, int b){
    printf("Sum is %d \n", a+b);
}

void subtraction(int c, int d){
    printf("Sub is %d", c-d);
}

