/*
QUESTION:
Write a C program to generate the following pattern.


SAMPLE INPUT:

Enter n value:
5
SAMPLE OUTPUT:

1
123
12345
1234567
123456789

*/

#include <stdio.h>

int main()
{
    int i, j, N;
    scanf("%d", &N);

    for(i=1;i<=N;i++)
    {
        // Logic to print numbers
        for(j=1;j<=(2*i)-1;j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
