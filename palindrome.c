/*
QUESTION:
Write a C program to find whether the given number is a Palindrome or not.

 

INPUT & OUTPUT FORMAT:

Input consists of 1 integer.
If the number is a Palindrome number, display "Same" or display "Not Same".


SAMPLE INPUT:

565
SAMPLE OUTPUT:

Same

*/

#include<stdio.h>
int main()
{
    //fill the code
    int n,i,rev=0;
    scanf("%d",&n);
    for(i=n;i!=0;i/=10)
        rev=(rev*10)+(i%10);
    if(rev==n)
        printf("Same");
    else
        printf("Not Same");
    return 0;
}
