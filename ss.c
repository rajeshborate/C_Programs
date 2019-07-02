/*
QUESTION:
Write a C program to find the maximum element in an array.

INPUT FORMAT:

Input consists of 1 integer and 1 array.
Integer corresponds to the size of the array.
FUNCTIONAL REQUIREMENTS:
int maximum(int, int *);
SAMPLE INPUT:
5
1
2
33
4
5
SAMPLE OUTPUT:
33


*/

#include<stdio.h>
int maximum(int n,int *p)
{
    int i,max=*(p+0);
    for(i=1;i<n;i++)
    {
        if((*(p+i))>max)
            max=*(p+i);
    }
    return max;
}
int main()
{
    //fill the code;
    int n,i,*ar,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&*(ar+i));
    max=maximum(n,ar);
    printf("%d",max);
    return 0;
}
