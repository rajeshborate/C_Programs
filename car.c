/*
Janu is very much interested in watching car racing. Once while doing so, this is what she observes that Car 1 is coming so fast. The road on which the car comes is divided into three. There are three roads A, B, and C. Each road is given some number. Before the car reaches the end of the road, Janu wants to know the road in which the car will travel. Help her in finding in which road the car will travel?

 

INPUT & OUTPUT FORMAT: 

Input consists of 4 integers.
First input corresponds to the number of road A.
Second input corresponds to the number of road B.
Third input corresponds to the number of road C.
Fourth input corresponds to the number of cars.
If the car cannot travel on any road, display “No path exists”.


SAMPLE INPUT: 

243
136
567
17


SAMPLE OUTPUT: 

Car 1 goes into road B

*/

#include<stdio.h>
int main()
{
    //Fill the code
    int A,B,C,cars;
    scanf("%d%d%d%d",&A,&B,&C,&cars);
    if(A%cars == 0)
        printf("Car 1 goes into road A");
    else if(B%cars == 0)
        printf("Car 1 goes into road B");
    else if(C%cars == 0)
        printf("Car 1 goes into road C");
    else
        printf("No path exist");
    return 0;
}
