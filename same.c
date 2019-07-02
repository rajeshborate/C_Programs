/*
QUESTION:
Write a C program to find whether the two arrays are the same or not. Two arrays are said to be the same if the sum of both the arrays is the same and the size of arrays is the same.


INPUT FORMAT:

Input consists of 2 integers and 2 arrays.
Integers correspond to the size of arrays.
If two arrays are same, display "Same" else display "Not Same"


FUNCTIONAL REQUIREMENTS:


int findsame(int*,int);
int* createarray(int);
void getelements(int*,int);


SAMPLE INPUT:
3
3
1
2
3
1
2
3


SAMPLE OUTPUT:
Same


*/

#include<stdio.h>
void getelements(int *ar,int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&*(ar+i));
}
int* createarray(int n)
{
    int *ar;
    getelements(ar,n);
    return ar;
}
int main()
{
    //fill the code;
    int s1,s2,*ar1,*ar2,is;
    scanf("%d",&s1);
    ar1=createarray(s1);
    scanf("%d",&s2);
    ar2=createarray(s2);
    is=findsame();
    return 0;
}
