/*
QUESTION:
Write a C program to store the employee details using Union.



SAMPLE INPUT:

Ram
10000
SAMPLE OUTPUT:

Enter the Employee details
Enter the Employee name
Ram
Enter the Employee salary
10000
Employee Details
'      10000

*/

#include<stdio.h>
union employee
{
    char name[20];
    int sal;
}emp;
int main()
{
    //Enter code here.
    printf("Enter the Employee details\n");
    printf("Enter the Employee name\n");
    scanf("%s",emp.name);
    printf("Enter the Employee salary\n");
    scanf("%d",&emp.sal);
    printf("Employee Details\n%s %d",emp.name,emp.sal);
    return 0;
}
