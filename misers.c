/*
Mrs.Bhulbhul is a miser to the core. She saves money even on petite things. One day she heard a discount offer announced in a mall. She wants to purchase a lot of items to save her money. The discount is given only when at least two items are bought. Since each item has different discount prices, she finds it difficult to check the amount she has saved. So she approaches you to device an automated discount calculator to make her easy while billing.

 

INPUT FORMAT: 

Input consists of two floating point values denoting price of item1 and item2.
The third input denotes the discount value in percentage.


OUTPUT FORMAT:

The output consists of three floating values denoting total amount, discounted price and amount saved.


SAMPLE INPUT: 

20.50
45.40
10 


SAMPLE OUTPUT: 

65.90
59.31
6.59 

*/

#include<stdio.h>
int main()
{
    // fill the code
    float d;  //discount
    float i1,i2,t,dp,da;  //item1 item2
    scanf("%f%f%f",&i1,&i2,&d);
    t = i1+i2;
    da = t*(d/100.0);
    dp = t - da;
    printf("%0.2f\n%0.2f\n%0.2f",t,dp,da);
    return 0;
}
