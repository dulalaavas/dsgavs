#include<stdio.h>
int main(){
    //eligibility to vote
        int ageV;
        printf("Enter your age: ");
        scanf("%d", &ageV);
        if (ageV >= 18){
            printf("You are eligible to vote. \n");
        }else{
            printf("You are not eligible to vote. \n");
        }
        
    //check if a character is vowel or not
        char letter;
        printf("Enter a character: ");
        scanf("%c", &letter);
        if (letter == 'a' || letter ==  'e'|| letter == 'i' || letter == 'o' || letter == 'u'){
            printf("%c is a vowel. \n", letter);
        }else{
            printf("%c is not a vowel. \n", letter);
        }

    //check if the year is a leap year or not
        int year;
        printf("Enter any year: ");
        scanf("%d", &year);
        if (year % 4 == 0){
            printf("%d is a leap year. \n", year);
        }else{
            printf("%d is not a leap year. \n", year);
        }

    //to classify a person’s weight status based on their BMI
        float weight, height, bmi;
        printf("Enter your weight and height :");
        scanf("%f %f", &weight, &height);
        bmi = weight / (height * height);
        if (bmi < 18.5){
            printf("Your BMI is %f, you are underweight.", bmi);
        }else if (bmi >= 18.5 && bmi < 25){
            printf("Your BMI is %f, you are normal weight.", bmi);
        }else if (bmi >= 25 && bmi < 30){
            printf("Your BMI is %f, you are overweight.", bmi);
        }else{
            printf("Your BMI is %f, you are obese.", bmi);
        }

    //calculate tax based on annual income
        float income, tax;
        printf("Enter your annual income: ");
        scanf("%f", &income);
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
    
    calculate discount per items
        float items, total, discount, finalAmount;
        printf("How many items did you buy? : ");
        scanf("%f", &items);
        printf("What is your total amount? : ");
        scanf("%f", &total);
        if (items > 1 && items <= 10) {
            discount = total * 5 / 100;
        } else if (items > 10 && items <= 50) {
            discount = total * 10 / 100;
        } else if (items > 50) {
            discount = total * 15 / 100;
        } else {
            printf("Invalid Input.\n");
        }
        finalAmount = total - discount;
        printf("Your final amount after discount is: %.2f\n", finalAmount);

    // age above 21 can rent a car
        int age;
        char licensestatus;
        printf("What is your age? : ");
        scanf("%d", &age);
        printf("Do you have a license? (y/n): ");
        scanf(" %c", &licensestatus);
        if (age >= 21 && licensestatus == 'y') {
            printf("You can rent a car.\n");
        } else if (age >= 21 && licensestatus == 'n') {
            printf("Sorry, you cannot rent a car.\n");
        } else if (age < 21) {
            printf("Sorry, you cannot rent a car.\n");
        } else {
            printf("Enter valid input.\n");
        }

    // check if a number is positive, negative or zero
        int number;
        printf("Enter a number: ");
        scanf("%d", &number);
        if (number > 0){
            printf("%d is a positive number. \n", number);
        }else if (number < 0){
            printf("%d is a negative number. \n", number);
        }else{
            printf("%d is zero. \n", number);
        }

    //to determine the oldest among three people based on their ages
        int age1, age2, age3;
        printf("Enter the ages of three people: ");
        scanf("%d %d %d", &age1, &age2, &age3);
        if (age1 > age2 && age1 > age3){
            printf("The oldest person is %d years old. \n", age1);
        }else if (age2 > age3){
            printf("The oldest person is %d years old. \n", age2);
        }else{
            printf("The oldest person is %d years old. \n", age3);
        }

    // calculate electricity bill
        int units;
        float bill;
        printf("Enter the number of units consumed: ");
        scanf("%d", &units);
        if (units <= 100){
            bill = units * 5;
        }else if (units <= 200){
            bill = 100 * 5 + (units - 100) * 10;
        }else{
            bill = 100 * 5 + 100 * 10 + (units - 200) * 15;
        }
        printf("Your electricity bill is: %.2f \n", bill);

}