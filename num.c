/*
QUESTION:
Write a C program to print the sum of the given numbers. The values must be scanned until the user enters -1 as value.

Note: Use a do-while loop.

 

INPUT & OUTPUT FORMAT:

Input consists of a list of integers.
The output consists of the sum of the given integers.


SAMPLE INPUT:

1
2
3
4
-1
SAMPLE OUTPUT:

10

*/

#include<stdio.h>
int main()
{
    //fill the code
    int n=0,sum=0;
    do
    {
        sum+=n;
        scanf("%d",&n);
    }while(n!=-1);
    printf("%d",sum);
    return 0;
}
