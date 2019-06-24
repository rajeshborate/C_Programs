/*
A wall is of length L and breadth B. Raj is trying to fit two rectangular paintings in it. He wants to fit these paintings on the wall such that they do not overlap on each other or they should not occupy space outside the area of the wall. He also knows the length and breadth of both the paintings. Help him in finding whether the two paintings can fit onto the wall properly or not.

 

INPUT & OUTPUT FORMAT: 

Input consists of 6 integers.
First and second input corresponds to the length and breadth of the wall.
Third and fourth input corresponds to the length and breadth of the first painting.
Fifth and sixth input corresponds to the length and breadth of the second painting.
If both the paintings can be fixed on the wall, display “Raj can fix both painting” or display “Raj cannot fix both painting”.


SAMPLE INPUT:

8
8
3
2
4
4
SAMPLE OUTPUT:

Raj can fix both painting

*/

#include<stdio.h>
int main()
{
    //fill your code
    int wl,wb,l1,b1,l2,b2;
    scanf("%d%d%d%d%d%d",&wl,&wb,&l1,&b1,&l2,&b2);
    if((l1+l2)<=wl && (b1+b2)<=wb && ((l1*b1)+(l2*b2))<=wl*wb)
        printf("Raj can fix both painting");
    else
        printf("Raj cannot fix both painting");
    return 0;
}
