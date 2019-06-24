/*
QUESTION:
Write a C program to find whether the given number is an Abundant number or not.

Note: An abundant number is a number for which the sum of its proper divisors is greater than the number itself. For example, integer 12 is an abundant number. The divisors of 12 are 1, 2, 3, 4 and 6. The sum of divisors of 12 is 16. As 12 < 16, it is an abundant number.

 

INPUT & OUTPUT FORMAT:

Input consists of 1 integer.
If it is an Abundant number display “Abundant Number” or display “Not Abundant Number”.


SAMPLE INPUT:

6
SAMPLE OUTPUT:

Not Abundant Number

*/

#include<stdio.h>
int main()
{
    //fill the code
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
            sum+=i;
    }
    if(sum>n)
        printf("Abundant Number");
    else
        printf("Not Abundant Number");
    return 0;
}
