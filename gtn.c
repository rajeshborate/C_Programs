/*
Write a C program to find the greatest among the given two numbers.



INPUT FORMAT: 

Input consist of 2 integers


SAMPLE INPUT:

77
99 


SAMPLE OUTPUT:

99 is greater


*/

#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    if(n>m)
    printf("%d is greater",n);
    else
    printf("%d is greater",m);
    //Fill the code
    return 0;
}
