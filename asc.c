/*
QUESTION:
Write a C program to sort the given array in ascending order.

INPUT FORMAT:

Input consists of 1 integer and 1 array.
Integer corresponds to the size of the array.
FUNCTIONAL REQUIREMENTS:
void sort(int, int *);
SAMPLE INPUT:

5
54
68
25
14
74
SAMPLE OUTPUT:
Sorted array is:
14
25
54
68
74

*/

#include<stdio.h>
void sort(int n,int *ar)
{
    int i,j,t;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(*(ar+j)>*(ar+j+1))
            {
                t=*(ar+j);
                *(ar+j)=*(ar+j+1);
                *(ar+j+1)=t;
            }
        }
    }
}
int main()
{
    //fill the code;
    int n,i,*ar;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&*(ar+i));
    sort(n,ar);
    printf("Sorted array is:\n");
    for(i=0;i<n;i++)
        printf("%d\n",*(ar+i));
    return 0;
}
