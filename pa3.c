/*
QUESTION:
Write a C program to generate the following pattern.



SAMPLE INPUT & OUTPUT:

Enter n value
5
1 2 3 4 5
2 3 4 5
3 4 5
4 5
5

*/

#include <stdio.h>
int main()
{
    int i, j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
