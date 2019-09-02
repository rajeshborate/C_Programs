#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int no_star, no_row, i, j;
	printf("How many stars you want to print ? ");
	scanf("%d", &no_star);
	printf("Upto how many rows ? ");
	scanf("%d", &no_row);
	int p = no_star/no_row;
	for(i=0; i<no_row; i++)
	{
		for(j=0; j<p; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	getch();
}
