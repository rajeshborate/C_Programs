/*
Having crossed the three-headed dog, Harry, Ron, and Hermoine went through a secret trap door in search of Sorcerer's stone. On the way, they passed through a room and found that the room has only one door opposite to them and the door through which they entered has shut once they entered the room. The door was very large with a four digit number imprinted on it. When Harry and Ron tried to open it by casting out spells, it didn't open. Having tried various spells both of them got fed up and they left the task to Hermoine. Hermoine on curiously observing the room found that a statement was written on the top of the room. It was written as follows 
        "I will be always four"
        “I can only be opened when you add my first and last and enter it”
        “If you find a sign, you should not consider it”
Help Hermoine break the code and open the door so that they can save the sorcerer's stone.

 

INPUT FORMAT: 

Input consists of a single integer which is present on the door.


OUTPUT FORMAT:

The output is a single integer.


SAMPLE INPUT: 

1001 


SAMPLE OUTPUT: 

2

*/

#include<stdio.h>
int main()
{
    //fill the code
    int num,f,l,div=1;
    scanf("%d",&num);
    l = num%10;
    f = num / 1000; 
    printf("%d",f+l);
    return 0;
    
}
