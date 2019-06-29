/*
QUESTION:
Write a C program to generate the following pattern.


SAMPLE INPUT:

Enter n value:
5
SAMPLE OUTPUT:
1
121
12321
1234321
123454321
*/

#include <stdio.h>

int main()
{
    int i, j, N;
    scanf("%d", &N);

    for(i=1;i<=N;i++)
    {
        // Prints the first part of the pattern
        for(j=1;j<=i;j++)
        {
            printf("%d",j );
        }

        // Prints the second part of the pattern
        for(j=i-1;j>=1;j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
