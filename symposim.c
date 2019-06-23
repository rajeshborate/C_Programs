/*
As they are going to conduct symposium next month at your college, they have asked you to prepare a software which helps the other college students to know about the department details. This should display the direction of the department when you give the department name as input. After the students enter the department, they will give the event name in which they are going to participate and it should display the hall details such as event venue.

First, you should welcome the students by displaying “Welcome to AsInTra”
Next, you should ask the student for their department. After getting department details, you should display the direction.
For example, If the department is CSE, enter 1 as input and 2 for ECE and so on.

CSE
ECE
MECH
CIVIL
If the department is CSE, Display “Go Straight”.

If the department is ECE, Display “Go Right”.

If the department is MECH, Display “Go Left”.

If the department is CIVIL, Display “Go Straight and turn Left”.

Next, after the student enters into the department, you should display “Welcome to CSE Department” and so on.
Then you should display the event venue details and ask students for their event details and enter the respective event code. Event(s) code is the serial number of that event.
CSE Events

Coding - Hall S108
Web Designing - Hall S208
Database - Hall S206                                                   
ECE Events

Project Expo - Hall M108
PPT - Hall M208
Circuit Debug - Hall M206
MECH Events

BottleRocketery - Hall N108
PPT - Hall N208
Mad 4 CAD - Hall N206
CIVIL Events

CADD Quest - Hall C108
Brick Bonding - Hall C208 
Model Making - Hall C206
Use Nested switch to solve this. The first switch is used for selecting a department and the second switch is used for selecting event(s).

If the student enters the department code wrongly, display Wrong Input. If the student enters the event code wrongly display No Event exist.

 

INPUT FORMAT: 

Input consist of 1 integer and 1 character.
First input corresponds to the department code.
Second input corresponds to the event code.


SAMPLE INPUT & OUTPUT:

Welcome to AsInTra
1.CSE
2.ECE
3.MECH
4.CIVIL
Enter Department
1
Go Straight
Welcome to CSE Department
a. Coding
b. Web Designing
c. Database
Enter Event
a
Go to hall S108

*/

#include<stdio.h>
int main()
{
    //Fill the code
    int d;
    char ch;
    printf(“Welcome to AsInTra”);
    printf("\n1.CSE\n2.ECE\n3.MECH\n4.CIVIL\nEnter Department");
    scanf("%d",&d);
    if(department == 1) 
    printf(“Go Straight”);
    if(department == 2) 
    printf(“Go Right”);
    if(department == 3) 
    printf(“Go Left”);
    if(department == 4) 
    printf(“Go Straight and turn Left”);
    printf(“Welcome to CSE Department”);
    scanf("%c",&ch);
    switch(ch)
    {
        case 
    }
  
    return 0;
}
