/*
Ramu after receiving his first salary decided to go to the bank to deposit his savings in his account. Before that, he does not know the process that is to be undertaken in the bank. Help him in understanding the process of depositing money and withdrawal of money. Use Switchcase to implement this concept.

 

INPUT & OUTPUT FORMAT:

Input consists of 2 integers.
First input corresponds to the account balance.
Second input corresponds to the process to be carried out.
If the input is 1, the amount should be deposited.
If the input is 2, the amount should be withdrawn and for other inputs display “Invalid Input”.
If the amount to be withdrawn is greater than the balance, display "Insufficient Balance".

SAMPLE INPUT 1:

1000
3
SAMPLE OUTPUT 1:

Invalid Input 
SAMPLE INPUT 2:

1000
1
500
SAMPLE OUTPUT 2:

1500

*/
#include<stdio.h>
int main()
{
    //fill your code
    int bal,ch,amt;
    scanf("%d%d",&bal,&ch);
    switch(ch)
    {
        case 1:
        scanf("%d",&amt);
        bal+=amt;
        printf("%d",bal);
        break;
        case 2:
        scanf("%d",&amt);
        if(amt>bal)
            printf("Insufficient Balance");
        else
        {
            bal-=amt;
            printf("%d",bal);
        }
        break;
        default:
        printf("Invalid input");
    }
    return 0;
}
