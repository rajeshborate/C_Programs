/*
QUESTION:
Write a C program to find the sum of elements in an array.



INPUT & OUTPUT FORMAT:

Input consists of 1 integer and 1 array.
Integer corresponds to the size of the array
The output consists of an integer.


FUNCTIONAL REQUIREMENTS: 

int sumOfElements(int, int *);


SAMPLE INPUT:
 3
 1
 2
 3


SAMPLE OUTPUT:
6

*/

#include<stdio.h>
int main()
{
    int n,sum=0,i;
    
    int arr[10];
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&arr[i]);
        
        
    }
    for(i=1;i<=n;i++){
        sum=sum+arr[i];
        
    }
    printf("%d",sum);
    //fill the code;
    return 0;
}
