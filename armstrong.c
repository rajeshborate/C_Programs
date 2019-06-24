/*
QUESTION:
Write a C program to find whether the given number is an Amstrong number or not. For example, 371 is an Armstrong number since 3^3+ 7^3 + 1^3 = 371.

 

INPUT & OUTPUT FORMAT:

Input consists of 1 integer.
If it is an Amstrong number, display “Armstrong Number” or display “Not Armstrong Number”.


SAMPLE INPUT:

153
SAMPLE OUTPUT:

Armstrong Number

*/

#include<stdio.h>
#include<math.h>
int main()
{
    //fill the code
    int n,sum,i;
    scanf("%d",&n);
    for(i=n;i!=0;i/=10)
        sum+=pow(i%10,3);
    if(sum==n)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");
    return 0;
}
