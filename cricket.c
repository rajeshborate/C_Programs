/*There was a large ground in center of the city which is rectangular in shape. The Corporation decides to build a Cricket stadium in the area for school and college students, But the area was used as a car parking zone. In order to protect the land from using as an unauthorized parking zone , the corporation wanted to protect the stadium by building a fence. In order to help the workers to build a fence, they planned to place a thick rope around the ground. They wanted to buy only the exact length of the rope that is needed. They also wanted to cover the entire ground with a carpet during rainy season. They wanted to buy only the exact quantity of carpet that is needed. They requested your help.
Can you please help them by writing a program to find the exact length of the rope and the exact quantity of carpet that is required?



Input format:
Input consists of 2 integers. The first integer corresponds to the length of the ground and the second integer corresponds to the breadth of the ground.



Output Format:


Output Consists of two integers.

The first integer corresponds to the length.
The second integer corresponds to the quantity of carpet required.

Sample Input:
50
20


Sample Output:

140
1000

*/


#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d\n%d",2*(a+b),a*b);
    
    //fill the code
    
    return 0;
}
