/*
QUESTION:
Write a C program to find whether the given number is a Harshad number or not. Note that Harshard number is an integer that is divisible by the sum of its digits.

 

INPUT & OUTPUT FORMAT:

Input consists of 1 integer.
If the given number is a Harshad Number, display "Harshad Number" or display "Not Harshad Number".


SAMPLE INPUT:

1729
SAMPLE OUTPUT:

Harshad Number

*/

#include<stdio.h>
int main()
{
    //fill the code
    int n,sum=0,i;
    scanf("%d",&n);
    for(i=n;i!=0;i/=10)
        sum+=i%10;
    if(n%sum==0)
        printf("Harshard Number");
    else
        printf("Not Harshard Number");
    return 0;
}
