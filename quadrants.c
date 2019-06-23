/*
Write a C program to find the quadrant in which the given x and y coordinates are present in a graph.

If it is in 1st Quadrant, then display Ist Quadrant,
If it is in 2nd Quadrant, then display IInd Quadrant,
If it is in 3rd Quadrant, then display IIIrd Quadrant,
If it is in 4th Quadrant, then display IVth Quadrant and
If it is in center display Origin.
 

INPUT FORMAT: 

Input consists of 2 integers.
First input corresponds to x coordinate.
Second input corresponds to y coordinate.


SAMPLE INPUT: 

5
6


SAMPLE OUTPUT: 

Ist Quadrant

*/

#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a==0 && b==0)
    printf("Origin");
    else if(a>0 && b>0)
    printf("Ist Quadrant");
    else if(a<0 &&b>0)
    printf("IInd Quadrant");
    else if(a<0 && b<0)
    printf("IIIrd Quadrant");
    else
    printf("IVth Quadrant");
    //Fill the code
    return 0;
}

