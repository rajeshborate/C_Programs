/*
Though there have been more successful pirates, Blackbeard is one of the best-known and widely-feared of his time. He commanded four ships and had a pirate army of 300 at the height of his career and defeated the famous warship, HMS “Scarborough” in sea-battle. He was known for barreling into battle clutching two swords with several knives and pistols at the ready. He captured over forty merchant ships in the Caribbean and without flinching killed many prisoners.

Now, Blackbeard and his three pirates found a treasure of gold coins. Long Ben too joined them. They decided to share the treasure. Blackbeard agreed to give x% share for Long Ben. He then decided to take y% share from the remaining treasure. His other pirates will share the remaining gold coins equally. Write a program to compute their share's. 

 

INPUT FORMAT: 

Input consists of 3 integers. The first input corresponds to the number of gold coins in the treasure. 
The second input corresponds to Ben's share percentage and the last input is Blackbeard's share percentage. 


OUTPUT FORMAT:

The output consists of three integers.
The first output integer corresponds to Long Ben's share.
The second integer corresponds to Blackbeard's share.
The last integer corresponds to other pirates share.


SAMPLE INPUT: 

729

65

87



SAMPLE OUTPUT:

473

222

11

*/

#include<stdio.h>
int main()
{
    //fill the code
    int t, p1, p2;
    scanf("%d %d %d", &t,&p1,&p2);
    int t1 = t*p1/100;
    t = t - t1;
    int t2 = t*p2/100;
    t = t - t2;
    int t3 = t/3;
    printf("%d\n%d\n%d", t1, t2, t3);
    return 0;
}


