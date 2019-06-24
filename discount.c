/*
Chris is going to celebrate his birthday in January. His father wants to buy a new dress for his son. Also as Christmas is approaching, he wants to buy a new dress for Christmas as well. As all the textile showrooms offer a discount in the month of December, his father decides to buy a dress for Chris birthday in December itself. Before that, he wants to know how much discount was given in each month. In the first month of the year, they offered a 20% discount. In the third and fourth month, they offered a 10% discount. In the sixth and seventh month, they offered a 75% discount. In the tenth and eleventh month, they offered a 30% discount. In the twelfth month, they offered a 35% discount. Implement this program using switch case.

Note: Use Fall through concept.

 

INPUT & OUTPUT PROGRAM:

Input consists of 2 integers.
First input corresponds to the rate of dress.
Second input corresponds to the month in which they will shop.
If an invalid month is given, it should display “Invalid Month”.


SAMPLE INPUT 1:

1000
1
SAMPLE OUTPUT 1:

Chris father needs to pay Rs.800.00.

*/

#include<stdio.h>
int main()
{
    //fill your code
    int ch,f=0;
    float rate;
    scanf("%f%d",&rate,&ch);
    switch(ch)
    {
        case 12:rate=(65*rate)/100;
        break;
        case 11:rate=(70*rate)/100;
        break;
        case 10:rate=(70*rate)/100;
        break;
        case 7:rate=(25*rate)/100;
        break;
        case 6:rate=(25*rate)/100;
        break;
        case 4:rate=(90*rate)/100;
        break;
        case 3:rate=(90*rate)/100;
        break;
        case 1:rate=(80*rate)/100;
        break;
        case 2:
        case 5:
        case 8:
        case 9:break;
        default:f++;
        printf("Invalid Month");
    }
    if(f==0)
    printf("Chris father needs to pay Rs.%.2f.",rate);
    return 0;
}
