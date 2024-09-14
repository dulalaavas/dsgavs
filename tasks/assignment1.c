# include<stdio.h>
# include<math.h>

int main(){

// Area of triangle
    float baseT, heightT, areaT;
    printf("Enter base of the triangle: ");
    scanf("%f", &baseT);
    printf("Enter height of the triangle: ");
    scanf("%f", &heightT);
    areaT = (baseT * heightT) / 2;
    printf("The area of the triangle is: %1.3f \n", areaT);

// Area of circle and volume of cylinder
    float radius1, height1, areaC, volumeC;
    const float pi = 3.14159;
    printf("Enter radius of the circle: ");
    scanf("%f", &radius1);
    printf("Enter height of the cylinder: ");
    scanf("%f", &height1);
    areaC = pi * radius1 * radius1;
    volumeC = 4/3 * pi * radius1 * radius1 * height1;
    printf("The area of the circle is: %1.3f \n", areaC);
    printf("The volume of the cylinder is: %1.3f \n", volumeC);

// convert (Centigrade degree temperature to Fahrenheit)
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9/5) + 32;
    printf("The temperature in Fahrenheit is: %1.3f \n", fahrenheit);

// calculate simple interest for a set of values representing principle, number of years and rate of interest 
    float principle1, rate1, time1, simpleInterest;
    printf("Enter principle amount: ");
    scanf("%f", &principle1);
    printf("Enter rate of interest: ");
    scanf("%f", &rate1);
    printf("Enter number of years: ");
    scanf("%f", &time1);
    simpleInterest = (principle1 * rate1 * time1) / 100;
    printf("The simple interest is: %1.3f \n", simpleInterest);

// Average, Sum, Percentage of 5 subjects
    float sub1, sub2, sub3, sub4, sub5, average, sum, percentage;
    printf("Enter marks of 5 subjects: ");
    scanf("%f, %f, %f, %f, %f", &sub1, &sub2, &sub3, &sub4, &sub5);
    sum = sub1 + sub2 + sub3 + sub4 + sub5;
    average = (sum) / 5;
    percentage = sum/500 * 100;
    printf("The average marks is: %1.2f \n", average);
    printf("The sum of marks is: %1.2f \n", sum);
    printf("The percentage is: %1.2f \n", percentage);

// perimeter of rectangle
    float length1, width1, perimeter;
    printf("Enter length of the rectangle: ");
    scanf("%f", &length1);
    printf("Enter width of the rectangle: ");
    scanf("%f", &width1);
    perimeter = 2 * (length1 + width1);
    printf("The perimeter of the rectangle is: %1.3f \n", perimeter);

// calculate compound interest
    float principle2, rate2, time2, compoundInterest;
    printf("Enter principle amount:");
    scanf("%f", &principle2);
    printf("Enter rate of interest:");
    scanf("%f", &rate2);
    printf("Enter number of years:");
    scanf("%f", &time2);
    compoundInterest = principle2 * pow((1 + rate2 / 100), time2)- principle2;
    printf("The compound interest is: %1.3f \n", compoundInterest);

}