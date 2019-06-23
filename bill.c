/*
Electricity board has decided to charge rupees based on the units consumed by a particular home. If the units consumed is less than or equal to 200, the cost for one unit is 0.5. If the unit is less than or equal to 400, the cost for one unit is 0.65 and Rs.100 extra charge. If the unit is less than or equal to 600, the cost for one unit is 0.80 and Rs.200 extra charge. If the unit is greater than 600 the cost for one unit is 1.25 and Rs.425 extra charge. You need to now calculate the electricity bill based on the units consumed (given input).

 

INPUT & OUTPUT FORMAT: 

Input consists of one integer. This corresponds to the units consumed.
The output consists of one integer. This corresponds to the electricity bill in rupees.


SAMPLE INPUT:

200


SAMPLE OUTPUT:

Rs.100

*/

#include<stdio.h>
#include<math.h>
int main()
{
    //fill the code
    int units,price;
    scanf("%d",&units);
    if(units<=200)
        price = round(units*0.5);
    else if(units<=400)
        price = round(units*0.65 + 100);
    else if(units<=600)
        price = round(units*0.80 + 200);
    else if(units>600)
        price = round(units*1.25 +  425);
    printf("Rs.%d", price);
    return 0;
}
