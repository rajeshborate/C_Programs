/*
QUESTION:
Write a C program to find the factorial of a given number. 

 

INPUT & OUTPUT FORMAT:

Input consists of 1 integer.
The output consists of 1 integer.


SAMPLE INPUT:

5
SAMPLE OUTPUT:

 120

*/

#include<stdio.h>
int main()
{
    int n,s=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        s=s*i;
        
    }
    printf("%d",s);
   
    //fill the code
    return 0;
}
