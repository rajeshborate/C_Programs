/*
QUESTION:
Write a C program to insert an element in an array at the given position. If the position where the element is to be inserted is greater than the size of the array display “Invalid Input”.


INPUT FORMAT:

Input consists of 3 integers and 1 array.
The first integer corresponds to the size of the array.
The second integer corresponds to the position where the element is to be inserted.
The third integer corresponds to the element to be inserted.
FUNCTIONAL REQUIREMENTS:
int insert(int*,int,int,int);
int* createarray(int);
int getelements(int*,int);
SAMPLE INPUT:
5
1
2
3
4
5
4
10
SAMPLE OUTPUT:
Array after insertion is:
1
2
3
10
4
5

*/

#include<stdio.h>
void getelements(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&*(a+i));
}
int* createarray(int n)
{
    int *a;
    getelements(a,n);
    return &a;
}
int main()
{
    //fill the code;
    int n,*ar,i,pos,num;
    scanf("%d",&n);
    ar=createarray(n);
    scanf("%d%d",&pos,&num);
    for(i=0;i<n;i++)
    printf("%d ",*(ar+i));
    return 0;
}
