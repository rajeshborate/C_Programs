/*
Write a C program to find the greatest among the three given numbers.

 

INPUT FORMAT: 

Input consists of 3 integers


SAMPLE INPUT & OUTPUT 1:

7
9
5
9 is greater. 

*/

#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
printf("%d is greater",a);
else if(b>a && b>c)
printf("%d is greater",b);
else
printf("%d is greater",c);
    //Fill the code
    return 0;
}
