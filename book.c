/*

Booka is an alien. He couldn't understand how to measure days, weeks, months and years. Make Booka understand what is meant by days, weeks, months and years. Teach him about the conversion of days into years, months and weeks using a program.

 

INPUT FORMAT: 

Input consists of an integer which corresponds to the number of days.


OUTPUT FORMAT:

The output consists of three integers.
The first integer corresponds to the total years.
The second integer corresponds to the total weeks.
The third integer corresponds to the total days.


SAMPLE INPUT: 

373


SAMPLE OUTPUT: 

1
1
1

*/

#include<stdio.h>
int main()
{
    //fill the code
    int num,years,weeks,days;
    scanf("%d",&num);
    years = num / 365;
    num = num - (years * 365);
    weeks = num / 7;
    days = num - (weeks * 7);
    printf("%d\n%d\n%d",years,weeks,days);
    return 0;
    
}
