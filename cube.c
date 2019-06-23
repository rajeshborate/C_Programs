/*
Dinu feels very bored during her summer vacation. So she decided to go to swimming class during the summer holidays. The swimming pool is in cubic shape. There she finds a problem that the owner doesn’t know to calculate how many liters of water can be stored in that swimming pool. Help him solve the mess and display “Cannot store” or “Can store”.

 

INPUT & OUTPUT FORMAT: 

Input consists of 2 integers.
First input corresponds to the length of sides.
Second input corresponds to liters of water.
SAMPLE INPUT:

1
1500


SAMPLE OUTPUT:

Cannot store

*/

#include<stdio.h>
int main()
{
    //fill the code
    int side, water;
    scanf("%d%d",&side,&water);
    side*side*side*1000>=water?printf("Can store"):printf("Cannot store");
    return 0;
}
