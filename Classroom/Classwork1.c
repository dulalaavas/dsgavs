#include <stdio.h>

// int main(){
//     // input and output salary using pointer
//         int salary;
//         int *ptr1,*ptr2;
//         ptr1 = &salary;
//         printf("Enter your salary: ");
//         scanf(" %d",ptr1);
//         printf("Your salary is: %d \n",*ptr1); 
//         printf("Your new salary is : %d",*ptr1 * 2);
// }

int calculate(int *a);

int main() {
   int salary;
   int *ptr = &salary;
   printf("Enter salary: ");
   scanf("%d",ptr);
   printf("Your original salary is %d\n",*ptr);
   
   int new = calculate(ptr);
   printf("Your new salary is %d",new);
}

int calculate(int *a){
    return *a * 2;
}