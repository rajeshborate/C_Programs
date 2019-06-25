/*
QUESTION:
Write a C program to create a structure called employee with name, employee id, name, age designation and salary as data members. Accept employee details and display it.



SAMPLE INPUT & OUTPUT:

Enter name:
Rajarajan
Enter ID:
001
Enter age:
24
Enter designation:
Manager
Enter Salary:
20000
Employee Details
Name of the Employee : Rajarajan 
ID of the Employee : 1 
Age of the Employee : 24 
Designation of the Employee : Manager 
Salary of the Employee : 20000.00 

*/

#include<stdio.h>
struct employee
{
    char name[50],des[100];
    int id,age;
    float sal;
}emp;
int main()
{
    //Enter code here.
    printf("Enter name:\n");
    scanf("%s",emp.name);
    printf("Enter ID:\n");
    scanf("%d",&emp.id);
    printf("Enter age:\n");
    scanf("%d",&emp.age);
    printf("Enter designation:\n");
    scanf("%s",emp.des);
    printf("Enter Salary:\n");
    scanf("%f",&emp.sal);
    printf("Employee Details\n");
    printf("Name of the Employee : %s\n",emp.name);
    printf("ID of the Employee : %d\n",emp.id);
    printf("Age of the Employee : %d\n",emp.age);
    printf("Designation of the Employee : %s\n",emp.des);
    printf("Salary of the Employee : %.0f",emp.sal);
    return 0;
}
