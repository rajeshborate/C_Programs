/*
QUESTION:
Write a C program to find the type of array as whether it is even, odd or mixed. If all the elements of an array are even, then display the array type as even. If all the elements of an array are odd, then display the array type as odd. If an array has both even and odd elements, then display the array type as mixed.


INPUT FORMAT:

Input consists of 1 integer and 1 array.
Integer corresponds to the size of the array.
FUNCTIONAL REQUIREMENTS:
int findType(int, int *);
SAMPLE INPUT:
5
2
4
1
3
5
SAMPLE OUTPUT:
Mixed

*/

#include<stdio.h>
int findType(int n,int *p)
{
    int i,e=0,o=0;
    for(i=0;i<n;i++)
    {
        if(*(p+i)%2==0)
            e++;
        else 
            o++;
    }
    if(e==n)
        return 0;
    else if(o==n)
        return 1;
    else
        return 2;
}
int main()
{
    //fill the code;
    int n,*ar,i,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&*(ar+i));
    t=findType(n,ar);
    if(t==0)
        printf("Even");
    else if(t==1)
        printf("Odd");
    else
        printf("Mixed");
    return 0;
}
