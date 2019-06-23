/*
Damu and Ram are friends. They felt very bored and decided to play a game with calendar and number of days. Damu will give the month and the year as input, and Ram has to find out the number of days in that month. Write a C program using switch case to help Ram find the answer. You should check whether the given year is a leap year. If it is a leap year, it will have 29 days in February.(Use only switch case and implement the “Fall Through” concept).

 

INPUT FORMAT: 

Input consists of 1 integer.


SAMPLE INPUT:

3
1996


SAMPLE OUTPUT:

Number of days is 31

*/

#include<stdio.h>
int main()
{
    //fill the code
    int year,month,ly;
    scanf("%d%d",&month,&year);
    if(year%4==0 && year%100!=0)
        ly=1;
    else if(year%400==0)
        ly=1;
    else
        ly=0;
    switch(month)
    {
        case 1 : printf("Number of days is 31");
                break;
        case 2 : ly==1?printf("Number of days is 29"):printf("Number of days is 28");
                break;
        case 3 : printf("Number of days is 31");
                break;
        case 4 : printf("Number of days is 30");
                break;
        case 5 : printf("Number of days is 31");
                break;
        case 6 : printf("Number of days is 30");
                break;
        case 7 : printf("Number of days is 31");
                break;
        case 8 : printf("Number of days is 31");
                break;
        case 9 : printf("Number of days is 30");
                break;
        case 10 : printf("Number of days is 31");
                break;
        case 11 : printf("Number of days is 30");
                break;
        case 12 : printf("Number of days is 31");
                break;
    
        
    }
    return 0;
}
