/*
On one fine Sunday, Sita and Radha decided to solve puzzles. Sita asked Radha to solve her puzzle. Sita gave the puzzle on time. She gave Radha the number of hours, number of minutes and number of seconds as input. With the given input, Radha should find out the total number of hours, the total number of minutes and the total number of seconds. Help Radha by writing a program for this.



For example, the input given by Sita is 1, 70, 5. Now, 70 minutes is equal to 1 hour 10 minutes. So the output will be

Total number of hour(s) is 2
Total number of minutes is 10
Total number of seconds is 5


INPUT & OUTPUT PROGRAM:

Input consists of three integers.
First input corresponds to the number of hours.
Second input corresponds to the number of minutes.
Third input corresponds to the number of seconds.


SAMPLE INPUT:

1
15
10
SAMPLE OUTPUT:

Total number of hours is 1
Total number of minutes is 15
Total number of seconds is 10

*/

#include<stdio.h>
int main()
{
    //fill your code
    int hr,min,s;
    scanf("%d%d%d",&hr,&min,&s);
    min+=(s/60);
    s%=60;
    hr+=(min/60);
    min%=60;
    printf("Total number of hours is %d\nTotal number of minutes is %d\nTotal number of seconds is %d",hr,min,s);
    return 0;
}
