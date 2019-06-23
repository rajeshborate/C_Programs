/*

Long ago, there was a war between the Trojans and Greeks. The Trojan and Greek armies met outside the walls of Troy. Seeing the bloodshed, the two kings decided to end the battle as early as possible as both the armies suffered a lot.

The shape of the battleground is square. To win the war is to conquer the flag first by the opposite army and place the flag post at the exact center of the battlefield. Can you please help them in placing the flag post at the exact center? 

Given the coordinates of the left bottom vertex of the square ground and the length of the side of the battlefield, you need to write a program to determine the coordinates of the center of the ground. 
[Assumption: Length of the side is always even]

 

INPUT FORMAT: 

Input consists of 3 integers.
The first integer corresponds to the x-coordinate of the left bottom vertex. The second integer corresponds to the y-coordinate of the left bottom vertex.
The third integer corresponds to the length of the square. 


OUTPUT FORMAT:

The output consists of two integers which correspond to the center of the battlefield.


SAMPLE INPUT: 

4 
0  
8 


SAMPLE OUTPUT: 

8 4  


*/


#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%d %d",a+c/2,b+c/2);
    // fill the code
    return 0;
    
}
