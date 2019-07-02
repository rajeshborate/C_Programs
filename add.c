/*
QUESTION:
Write a C program to add two arrays.


INPUT FORMAT:

Input consists of 1 integer and 2 arrays.
Integer corresponds to the size of arrays.


FUNCTIONAL REQUIREMENTS:
int* createarray(int);
void getelements(int*,int);
void arraysum(int*,int*,int*,int);


SAMPLE INPUT:
3
1
2
3
4
5
6


SAMPLE OUTPUT:
5
7
9


*/

#include<stdio.h>
void getelements(int* ar,int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&*(ar+i));
}
int* createarray(int n)
{
    int* ar;
    getelements(ar,n);
    return ar;
}
void arraysum(int* a1,int* a2,int n)
{
    int i,sum;
    for(i=0;i<n;i++)
    {
       sum=*(a1+i);
       sum+=*(a2+i);
       printf("%d\n",sum);
    }
}
int main()
{
    //fill the code;
    int s,*ar1,*ar2;
    scanf("%d",&s);
    ar1=createarray(s);
    ar2=createarray(s);
    arraysum(ar1,ar2,s);
    return 0;
}
