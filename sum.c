/*
QUESTION:
Write a C program to print the sum of a given range of numbers. 

Note: Use while loop

 

INPUT & OUTPUT FORMAT:

Input consists of 2 integers.
First input corresponds to the minimum value of the range.
Second input corresponds to the maximum value of the range.
The output is an integer which corresponds to the sum of range.


SAMPLE INPUT:

5
10
SAMPLE OUTPUT:

45

*/

#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int sum=0;
    for(int i=a;i<=b;i++){
        sum=sum+i;
        
    }
    printf("%d",sum);
    //fill the code
    return 0;
}
