/*
QUESTION:
Write a C program to find whether the given number is a Prime number or not.

 

INPUT & OUTPUT FORMAT:

Input consists of 1 integer.
If the given number is Prime number, display "Prime" or display "Not Prime".


SAMPLE INPUT:

2
SAMPLE OUTPUT:

Prime

*/

#include<stdio.h>
int main()
{
    //fill the code
    int n,f=0,i;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            f++;
            break;
        }
    }
    if(f==0)
        printf("Prime");
    else
        printf("Not Prime");
    return 0;
}
