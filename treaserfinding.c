/*
Lucy and Tina are close friends. They both are studying in the same school. Now they are on their summer vacation. As they are bored, they ask their parents to take them to an exhibition. There Lucy and Tina play a game. In this game, there are three boxes with some number written on their top. There is a treasure in one of the three boxes and the treasure is present in the box with the second largest number on its top. Also, to open the box, they need to decode the correct code of this box. The clue given to them to find the code is that it is the largest number which divides all the three given numbers.

So, now help Lucy and Tina to decode the code.

 

INPUT & OUTPUT PROGRAM:

Input consists of three integers.
First input corresponds to the number of the first box.
Second input corresponds to the number of the second box.
Third input corresponds to the number of the third box.


SAMPLE INPUT:

2
4
6
SAMPLE OUTPUT:

The treasure is in the box which has number 4.
The code to open the box is 2.

*/

#include<stdio.h>
int main()
{
    //fill your code
    int ar[3],i,j,t;
    for(i=0;i<3;i++)
        scanf("%d",&ar[i]);
    for(i=0;i<2;i++)
    {
        for(j=0;j<2-i;j++)
        {
            if(ar[j]>ar[j+1])
            {
                t=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=t;
            }
        }
    }
    for(i=ar[0];i>=1;i--)
    {
        if(ar[0]%i==0 && ar[1]%i==0 && ar[2]%i==0)
            break;
    }
    printf("The treasure is in box which has number %d.\n",ar[1]);
    printf("The code to open the box is %d.",i);
    return 0;
}
