/*
Each Sunday, a newspaper agency sells w copies of a special edition newspaper for Rs.x per copy. The cost to the agency of each newspaper is Rs.y. The agency pays a fixed cost for storage, delivery and so on of Rs.100 per Sunday. The newspaper agency wants to calculate the profit which it obtains only on Sundays. Can you please help them out by writing a program to compute the profit if w, x, and y are given.

 
INPUT FORMAT: 

Input consists of 3 integers: w, x, and y.
w is the number of copies sold, x is the cost per copy and y is the cost the agency spends per copy. 


OUTPUT FORMAT:

The output consists of a single integer which corresponds to the profit obtained by the newspaper agency.


SAMPLE INPUT: 

1000
2
1


SAMPLE OUTPUT: 

900
*/

#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%d",(a*b)-(a*c)-100);
    
 // fill the code
 return 0;
}
