/*
Write a C program to find whether the given number is positive or negative.

 

INPUT FORMAT: 

Input consists of 1 integer.


SAMPLE INPUT & OUTPUT 1:

56
Positive


SAMPLE INPUT & OUTPUT 2:

-56
Negative

*/

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=0)
    printf("Positive");
    else
    printf("Negative");
    //Fill the code
    return 0;
}
