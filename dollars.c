/*
QUESTION:
Write a C program to add two dollars and cents.

 

INPUT & OUTPUT FORMAT:

Input consists of 4 integers.
First two inputs correspond to the value of the first dollar and cent.
Next two inputs correspond to the value of the second dollar and cent.
Output should print the sum of dollar and cent.


SAMPLE INPUT:

30
10
140
99
SAMPLE OUTPUT:

171
9

*/

#include<stdio.h>
int main()
{
    //fill the code
    int d1,d2,c1,c2,sd,sc;
    scanf("%d%d%d%d",&d1,&c1,&d2,&c2);
    sd=d1+d2;
    sc=c1+c2;
    if(sc>=100)
    {
        sd+=(sc/100);
        sc%=100;
    }
    printf("%d\n%d",sd,sc);
    return 0;
}
