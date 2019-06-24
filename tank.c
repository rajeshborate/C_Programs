/*
Bala has a cylindrical tank in which he has to fill water in certain hours. For every one hour, his house will receive N liters of water from the corporation. Find out whether he will be able to fill the tank with water in X hours. The radius and height of the cylinder are given as the input.

 

INPUT & OUTPUT FORMAT: 

Input consists of 4 float values.
First input corresponds to the radius of the tank.
Second input corresponds to the height of the tank.
Third input corresponds to the amount of water the tank receives every hour.
Fourth input corresponds to the total number of hours the tank receives water.


SAMPLE INPUT:

5
7
100
6
SAMPLE OUTPUT:

The tank can be filled within 6.0 hours

*/
#include<stdio.h>
int main()
{
    //fill your code
    float r,h,amt,hr,vol,gv;
    scanf("%f%f%f%f",&r,&h,&amt,&hr);
    vol=(22/7)*r*r*h;
    gv=amt*hr;
    if(vol<=gv)
        printf("The tank can be filled within %.1f hours",hr);
    else
        printf("The tank cannot be filled within %.1f hours",hr);
    return 0;
}
