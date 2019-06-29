/*
QUESTION:
Write a C program to generate the following pattern.


SAMPLE INPUT:

Enter n value:
3
SAMPLE OUTPUT:
1
131
13531

*/

#include <stdio.h>

int main()
{
    int i, j, N,x;
    scanf("%d", &N);

    for(i=1;i<=N;i++)
    {
        x=1;
        // Prints the first part of pattern
        for(j=1;j<=i;j++)
        {
            printf("%d",x );
            x+=2;
        }
        x-=2;
        // Prints the second part of pattern
        for(j=i-1;j>=1;j--)
        {
            printf("%d",x-2 );
            x-=2;
        }

        printf("\n");
    }

    return 0;
}
