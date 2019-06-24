/*
QUESTION:
Write a C program to find the multiplication tables of a given number.

 

INPUT & OUTPUT FORMAT:

Input consists of 2 integers.
First input corresponds to the number for which the multiplication tables have to be generated.
Second input corresponds to the number until which the tables need to be generated.


SAMPLE INPUT:

1
5
SAMPLE OUTPUT:

1  *  1  =  1
1 * 2 = 2
1 * 3 = 3
1 * 4 = 4
1  *  5  =  5

*/
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=1;i<=b;i++){
        printf("%d * %d = %d\n",a,i,a*i);
        
    }
    //fill the code
    return 0;
}
