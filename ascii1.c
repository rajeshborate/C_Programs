/*
Write a C program to find whether a given character is an uppercase, lowercase, number or symbol.

If it is an alphabet find whether it is an Uppercase or Lowercase.
If it is a number display Number else display Symbol.
 

INPUT FORMAT: 

Input consists of 1 character.


SAMPLE INPUT:

A


SAMPLE OUTPUT:

Upper

*/

#include<stdio.h>
int main()
{
    //Fill the code
    char ch;
    scanf("%c",&ch);
    if(ch>=97 && ch<=122)
        printf("Lower");
    else if(ch>=65 && ch<=90)
        printf("Upper");
    else if(ch>=48 && ch<=57)
        printf("Number");
    else
        printf("Symbol");
    return 0;
}
