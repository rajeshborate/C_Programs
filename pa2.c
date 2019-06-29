/*
QUESTION:
Write a C program to generate the following pattern.


SAMPLE INPUT & OUTPUT:

Enter n value
5
*
* *
* * *
* * * *
* * * * *   

*/

#include <stdio.h>
int main()
{
    int i, j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
