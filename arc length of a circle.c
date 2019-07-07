/*
Arc length of a circle
Program to find the arc length of a circle.
The input radius and center angle must be a float variables, the output should also be printed as a floating point value with 2 point precision. No other extra information should be printed except the arc length value to the stdout. (Assume PI = 3.14)

Case 1

Input (stdin)
25
50

Output (stdout)
21.81

*/

#include<stdio.h>
int main(){
  
  float r,c;
  scanf("%f %f",&r,&c);
  float a;
  a=2.0*3.14*r*(c/360.0);
  printf("%0.2f",a);
  

return 0;
}
