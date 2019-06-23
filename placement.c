/*
In your college, next week there is an on-campus drive happening for your seniors. The company has asked for the short-listed students names. The following are their criteria to become eligible for the campus interview.

Students with 0 arrears and with 7.0 and above 7.0 CGPA
Students with 1 or 2 arrears and with 7.5 and above 7.5 CPGA
So your placement officer wants to shortlist the student names for the interview. As you are good at programming, he wants you to help him shortlist the student names. Help him by solving the program and display “Eligible to attend placement” or “Not Eligible to attend placement”.

 

INPUT & OUTPUT FORMAT: 

Input consists of 1 string, 1 float, and 2 integers.
The first input corresponds to the name of the student.
Second input corresponds to register number.
Third input corresponds to his/her CPGA.
Fourth input corresponds to the number of arrears.
The output consists of 2 strings and 1 integer.


SAMPLE INPUT:

Jai
69
7.3
2


SAMPLE OUTPUT:

Jai
69
Not Eligible to attend placement

*/

#include<stdio.h>
struct stu
{
  int reg,arr;
  float cgpa;
  char name[10];
}S;
int main()
{
    //fill the code
    //fgets(S.name, 10, stdin);
    scanf("%s%*c%d%f%d",S.name,&S.reg,&S.cgpa,&S.arr);
    printf("%s\n%d",S.name,S.reg);
    if((S.cgpa >= 7 && S.arr==0) || (S.cgpa >=7.5 && S.arr<=2))
        printf("\nEligible to attend placement");
    else
        printf("\nNot Eligible to attend placement");
    return 0;
}
