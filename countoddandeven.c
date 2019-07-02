/*
QUESTION:
Write a C program to count the number of even and odd elements in an array.


INPUT & OUTPUT FORMAT:

Input consists of 1 integer and 1 array.
Integer corresponds to the size of the array.
The output consists of integers


FUNCTIONAL REQUIREMENTS:

int countEven(int , int *);
int countOdd(int , int *);


SAMPLE INPUT:
3
1
2
3


SAMPLE OUTPUT:

Odd: 2
Even: 1


*/

#include<stdio.h>
int countEven(int n,int *p)
{
    int i,c=0;
    for(i=0;i<n;i++)
    {
        if((*(p+i))%2==0)
            c++;
    }
    return c;
}
int countOdd(int n,int *p)
{
    int i,c=0;
    for(i=0;i<n;i++)
    {
        if((*(p+i))%2!=0)
            c++;
    }
    return c;
}
int main()
{
    //fill ypur code
    int n,i,*ar,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&*(ar+i));
    c=countOdd(n,ar);
    printf("Odd: %d\n",c);
    c=countEven(n,ar);
    printf("Even: %d\n",c);
    return 0;
}
