/*
Ramu after finishing his degree joined a company in Bangalore. His manager has told him that he will get an increment if he works hard. As he belongs to a middle-class family, he wants to plan the budget according to his salary. He stays in a hostel. His expenses are hostel fees, bank loan interest. He wants to find out whether he can save any money or he wants to work hard or his salary will be able to manage his expenses alone. Help him in calculating the budget.

 

INPUT & OUTPUT FORMAT: 

Input consists of 5 integers.
First input corresponds to salary, second input corresponds to the amount he pays to the bank, third input corresponds to hostel fees, fourth input corresponds to food expenses and fifth input corresponds to the amount he sends to his parents.
If he can save money out of his expenses display “He can save the money” or if he can manage his expenses alone display “He can manage the expenses” or else display “He wants to work hard”.


SAMPLE INPUT:

10000
5000
4000
1500
5000
SAMPLE OUTPUT:

He has to work hard

*/

#include<stdio.h>
int main()
{
    //fill your code
    int sal,bnk,host,food,prnt,ts;
    scanf("%d%d%d%d%d",&sal,&bnk,&host,&food,&prnt);
    ts=bnk+host+food+prnt;
    if(sal>ts)
        printf("He can save the money");
    else if(sal==ts)
        printf("He can manage the expenses");
    else
        printf("He has to work hard");
    return 0;
}
