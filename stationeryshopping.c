/*
Raj starts a new stationery shop. He wants to calculate the number of items that are sold and the number of items that are remaining in the stock. Whenever a customer asks for them, he will be able to quickly check whether the item is already sold or available. If the item is not available, it should display "Out of stock". If it is available, it should display the remaining number of items available and the total cost that should be paid by a customer. If the number of items asked by the customer is greater than the items available, it should display the number of items currently available.


For example, if a customer asks 8 scales and only 3 scales are available, display "Only 3 scale are available".

 

INPUT & OUTPUT FORMAT: 

Input consists of 1 string and 3 integers.
First input corresponds to the item name.
Second input corresponds to the number of items available in the stock.
Third input corresponds to the amount of one item.
Fourth input corresponds to the number of items asked by the customer.


SAMPLE INPUT:

pencil
10
15
5
SAMPLE OUTPUT:

The amount for 5 pencil is 75
Remaining number of pencils present in the stock: 5

*/

#include<stdio.h>
int main()
{
    //fill your code
    char item[20];
    int no,amt,req;
    scanf("%s%d%d%d",item,&no,&amt,&req);
    if(no==0)
        printf("Out of stock");
    else if(no>req)
    {
        printf("Amount for %d %s is %d\n",req,item,req*amt);
        no-=req;
        printf("Remaining r of %s present in stock is %d",item,no);
    }
    else
        printf("Only %d %s are available",no,item);
    return 0;
}
