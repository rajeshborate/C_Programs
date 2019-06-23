/*
Write a C program to display the ASCII value of vowels for both upper case and lower case letters. If the given character is not a vowel, display "Not a vowel" and If it is a vowel then display the "ASCII value of the vowel".



INPUT FORMAT: 

Input consists of 1 integer.


SAMPLE INPUT:

A


SAMPLE OUTPUT:

ASCII of A is 65

*/

#include<stdio.h>
int main()
{
    //fill the code
    char ch;
    scanf("%c",&ch);
    if((ch >= 65 && ch<=90) || (ch >= 97 && ch <= 122))
        printf("ASCII of %c is %d",ch,ch);
    else 
    printf("Not a vowel");
    return 0;
}
