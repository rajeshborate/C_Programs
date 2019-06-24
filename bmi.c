/*

You are so much interested in making your body fit and hence you wanted to go to the gym daily. But your mother did not like the idea. She says she will let you go if your weight is not normal. So you decided to calculate your Body Mass Index.

Write a C program to calculate BMI for your weight and height. Enter your height in centimeters and weight in kilograms.

 

INPUT & OUTPUT FORMAT: 

Input consists of 2 float values.
First input corresponds to your weight.
Second input corresponds to your height.
If you are underweight, display “You are underweight. Have an apple daily.”
If you are normal, display “You are normal. Go for a walk every day and maintain it.”
If you are overweight, display “You are overweight. Go to the gym daily.”
If you have obesity, display “You are obese. You need to see a doctor.”


SAMPLE INPUT:

75
175
SAMPLE OUTPUT:

You are normal. Go walking daily and maintain it.

*/

#include<stdio.h>
int main()
{
    //fill your code
    float w,h,bmi;
    scanf("%f%f",&w,&h);
    bmi=w*10000/(h*h);
    if(bmi<18.5)
        printf("You are underweight. Have an apple daily.");
    else if(bmi>=18.5 && bmi<=24.9)
        printf("You are normal. Go walking daily and maintain it.");
    else if(bmi>=25 && bmi<=29.9)
        printf("You are overweight. Go to Gym daily.");
    else
        printf("You are obese. Go to doctor.");
    return 0;
}
