/*
QUESTION:
Write a C program to find whether the given numbers are Friendly Pair or not.

Friendly pair is two or more numbers with a common abundancy index i.e the ratio between the sum of divisors of a number and the number itself. For example, 6 and 28 are a Friendly pair as (Sum of divisors of 6)/6 = (Sum of divisors of 28)/28

Note: Don't use unnecessary sentences in input or output. 

 

INPUT & OUTPUT FORMAT:

Input consists of 2 integers.
The first integer corresponds to number 1 and the second integer corresponds to number 2.
If they are a Friendly pair, display “Friendly Pair” or display “Not Friendly Pair”.


SAMPLE INPUT:

6
28
SAMPLE OUTPUT:



*/

#include<stdio.h>
int main()
{
    //fill the code
    int n1,n2,i,sum1=0,sum2=0;
    scanf("%d%d",&n1,&n2);
    for(i=1;i<n1;i++)
    {
        if(n1%i==0)
            sum1+=i;
    }
    for(i=1;i<n2;i++)
    {
        if(n2%i==0)
            sum2+=i;
    }
    if(sum1/n1==sum2/n2)
        printf("Friendly Pair");
    else
        printf("Not Friendly Pair");
    return 0;
}
