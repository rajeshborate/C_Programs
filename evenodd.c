/*
QUESTION:
Write a C program to find the sum and average of even and odd numbers from the given number list.

 

INPUT & OUTPUT FORMAT:

Input consists of a list of integers.
Average of numbers must have one floating value.
The output consists of two integers and two floating point values.


SAMPLE INPUT:

1
2
3
4
-1
SAMPLE OUTPUT:

6
4
3.00
2.00

*/

#include<stdio.h>
int main()
{
    //fill the code
    int n=0,se=0,ce=0,so=0,co=0;
    while(n!=-1)
    {
        if(n%2==0)
        {
            se+=n;
            ce++;
        }
        else
        {
            so+=n;
            co++;
        }
        scanf("%d",&n);
    }
    ce--;
    printf("%d\n%d\n",se,so);
    printf("%.2f\n%.2f",(float)se/ce,(float)so/co);
    return 0;
}
