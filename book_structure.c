/*
QUESTION:
Write a C program to store the book details using Union.



SAMPLE INPUT & OUTPUT:

Physics

50

Sample Input and Output :

Enter the Book details

Enter the Book name

Physics

Enter the Book price

50

Book Details

2       50

Enter the Book name

Physics

Book Name : Physics

*/

#include<stdio.h>
union book
{
    char name[50];
    int p;
}bk;
int main()
{
    //Enter code here.
    printf("Enter the Book details\n");
    printf("Enter the Book name\n");
    scanf("%s",bk.name);
    printf("Enter the Book price\n");
    scanf("%d",&bk.p);
    printf("Book Details\n%s %d\n",bk.name,bk.p);
    printf("Enter the Book name\n");
    scanf("%s",bk.name);
    printf("Book Name : %s",bk.name);
    return 0;
}
