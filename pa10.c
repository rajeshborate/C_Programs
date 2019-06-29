/*
QUESTION:
Write a C program to generate the following pattern.


SAMPLE INPUT:

Enter n value:
3
SAMPLE OUTPUT:

*
*1*
*121*
*12321*
*121*
*1*
*

*/

#include <stdio.h>

int main()
{
    int i, j, N;
    scanf("%d", &N);

    printf("*\n");
    // Print the first upper half
    for(i=1;i<=N;i++)
    {
        printf("*");
        for(j=1;j<=i;j++)
        {
            printf("%d",j );
        }

        for(j=i-1;j>=1;j--)
        {
            printf("%d", j);
        }
        printf("*");

        printf("\n");
    }

    // Print the lower half of the pattern
    for(i=N-1;i>=1;i--)
    {
        printf("*");
        for(j=1;j<=i;j++)
        {
            printf("%d", j);
        }

        for(j=i-1;j>=1;j--)
        {
            printf("%d", j);
        }
        printf("*");

        printf("\n");
    }
    printf("*");

    return 0;
}
