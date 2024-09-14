#include<stdio.h>
int main(){
    //eligibility to vote
        // int age;
        // printf("Enter your age: ");
        // scanf("%d", &age);
        // if (age >= 18){
        //     printf("You are eligible to vote. \n");
        // }else{
        //     printf("You are not eligible to vote. \n");
        // }
        
    //check if a character is vowel or not
        // char letter;
        // printf("Enter a character: ");
        // scanf("%c", &letter);
        // if (letter == 'a' || letter ==  'e'|| letter == 'i' || letter == 'o' || letter == 'u'){
        //     printf("%c is a vowel. \n", letter);
        // }else{
        //     printf("%c is not a vowel. \n", letter);
        // }

    //checkk if the year is a leap year or not
        // int year;
        // printf("Enter any year: ");
        // scanf("%d", &year);
        // if (year % 4 == 0){
        //     printf("%d is a leap year. \n", year);
        // }else{
        //     printf("%d is not a leap year. \n", year);
        // }

    //to classify a person’s weight status based on their BMI
        // float weight, height, bmi;
        // printf("Enter your weight and height :");
        // scanf("%f %f", &weight, &height);
        // bmi = weight / (height * height);
        // if (bmi < 18.5){
        //     printf("Your BMI is %f, you are underweight.", bmi);
        // }else if (bmi >= 18.5 && bmi < 25){
        //     printf("Your BMI is %f, you are normal weight.", bmi);
        // }else if (bmi >= 25 && bmi < 30){
        //     printf("Your BMI is %f, you are overweight.", bmi);
        // }else{
        //     printf("Your BMI is %f, you are obese.", bmi);
        // }

    //calculate tax based on annual income
    float income, tax;
    printf("Enter your annual income: ");
    scanf("%d", &income);
    if (income > 0 && income <= 10000){
        tax = income * 0;
        printf("Your tax is: %1.3f \n",tax);
    }else if(income > 10000 && income <= 50000){
        tax = income * 10/100;
        printf("Your tax is: %1.3f \n",tax);
    }else if(income > 50000 && income <= 100000){
        tax = income * 20/100;
        printf("Your tax is: %1.3f \n",tax);
    }else if(income > 100000){
        tax = income * 30/100;
        printf("Your tax is: %1.3f \n",tax);
    }else{
        printf("Please inter valid amount");
    }
}