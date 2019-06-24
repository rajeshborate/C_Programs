/*
Arun wants to buy a shirt. As he is very lazy, he decided to buy the shirt online. He chooses a shirt in Flipkart and is surprised to see the same shirt in Amazon and Snapdeal as well. So he decided to buy the shirt from the website which offers it at the least price. The price of the shirt, discount % and the shipping charges of all three websites have been given as input. Help him in calculating the price of the shirt in each website and decide which website has the lowest price.

 

INPUT & OUTPUT FORMAT: 

Input consist of 9 integers.
First three input corresponds to Flipkart details such as the amount of the shirt, discount offered and shipping charges.
Next three input corresponds to Snapdeal details such as the amount of shirt, discount offered and shipping charge.
Last three input corresponds to amazon details such as the amount of shirt, discount offered and shipping charge.


SAMPLE INPUT:

1000
50
50
900
50
70
800
10
200
SAMPLE OUTPUT:

In Flipkart: Rs.550
In Snapdeal: Rs.520
In Amazon: Rs.920
He will prefer Snapdeal

*/

#include<stdio.h>
struct site
{
    float amt;
    int dis,sc;
}flip,snap,amz;
int main()
{
    //fill your code
    scanf("%f%d%d",&flip.amt,&flip.dis,&flip.sc);
    scanf("%f%d%d",&snap.amt,&snap.dis,&snap.sc);
    scanf("%f%d%d",&amz.amt,&amz.dis,&amz.sc);
    flip.amt=((flip.amt*(100-flip.dis))/100)+flip.sc;
    snap.amt=((snap.amt*(100-snap.dis))/100)+snap.sc;
    amz.amt=((amz.amt*(100-amz.dis))/100)+amz.sc;
    printf("In Flipkart: Rs.%.0f\n",flip.amt);
    printf("In Snapdeal: Rs.%.0f\n",snap.amt);
    printf("In Amazon: Rs.%.0f\nHe will prefer ",amz.amt);
    if(flip.amt<snap.amt && flip.amt<amz.amt)
        printf("Flipkart");
    else if(snap.amt<flip.amt && snap.amt<amz.amt)
        printf("Snapdeal");
    else
        printf("Amazon");
    return 0;
}
