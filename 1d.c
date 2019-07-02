/*
QUESTION:
Aadhi is learning storage structure with the help of Ragavi. Ragavi's first task is to make Aadhi understand the concept of arrays by asking Aadhi to create an array dynamically and get the inputs into the array and print the array. As Aadhi had confusion, he has approached you for help. Help Aadhi by writing a program to create an array, get inputs and print the inputs.



INPUT & OUTPUT FORMAT:

The first line corresponds to the size of the array n.
The next line corresponds to the number of inputs.
The output consists of the elements in the array.



FUNCTIONAL REQUIREMENTS:

void print(int, int *);

SAMPLE INPUT: 

3
1
2
3
SAMPLE OUTPUT:
1
2
3

*/

#include<stdio.h>
void print(int n,int *p)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d\n",*(p+i));
}
int main()
{
    //fill the code
    int n,i,*ar;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&*(ar+i));
    print(n,ar);
    return 0;
}
