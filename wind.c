/*
Wind chill factor is the felt air temperature on exposed skin due to the wind. The wind chill temperature is always lower than the air temperature and is calculated as per the following formula.

WCF = 35.74 + 0.6215t + (0.4275t - 35.75) * v^0.16

Write a program to receive values of temperature and wind velocity and calculate the Wind Chill Factor.

 

INPUT FORMAT: 

The input consists of two integers. The first integer corresponds to the temperature of the wind and the second integer corresponds to the wind velocity.


OUTPUT FORMAT:

The output consists of a single integer which corresponds to the Wind Chill Factor. Decimal values are rounded off to two decimal points.


SAMPLE INPUT: 

35
20


SAMPLE OUTPUT: 

23.92


*/

#include<stdio.h>
#include<math.h>
int main()
{
    //fill the code
    float wcf, t, v;
    scanf("%f%f",&t,&v);
    wcf = 35.74 + (0.6215 * t) + ((0.4275 * t) - 35.75) * pow(v, 0.16);
    printf("%0.2f", wcf);
    return 0;
}

