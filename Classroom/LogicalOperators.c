#include<stdio.h>
int main(){
    // To check num is odd or even
        int number;
        printf("Enter a number: ");
        scanf("%d", &number);
        /*
            if (condition){
            }else{
            }
        */
        if (number % 2 == 0){
            printf("%d is an even number. \n", number);
        }else{
            printf("%d is an odd number. \n", number);
        }
    // To give grading to the marks
        int marks;
        printf("Enter your marks: ");
        scanf("%d", &marks);
        if (marks >= 90){
            printf("Grade A+");
        }else if (marks > 80 && marks < 90){
            printf("Grade A");
        }else if (marks > 70 && marks < 80){
            printf("Grade B");
        }else{
            printf("You are a failure.");
        }
}