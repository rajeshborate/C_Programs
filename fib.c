/*
QUESTION:
Write a C program to find whether the given number is a Fibonacci number.

 

INPUT & OUTPUT FORMAT:

Input consists of 1 integer.
If it is a Fibonacci number display “Fibonacci Number” or display “Not Fibonacci Number”.
The output consists of 1 integer.


SAMPLE INPUT:

3
SAMPLE OUTPUT:

Fibonacci Number

*/

#include<stdio.h>
int main()
{
    //fill the code
    int n,a=1,b=0,c=0,f=0;
    scanf("%d",&n);
    while(n>c)
    {
        c=a+b;
        a=b;
        b=c;
        if(c==n)
        {
            f++;
            break;
        }
    }
    if(n==0 || f==1)
        printf("Fibonacci Number");
    else
        printf("Not Fibonacci Number");
    return 0;
}
