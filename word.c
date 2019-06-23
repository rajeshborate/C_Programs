/*
Write a C program to display the name of the single digit number using switch case. If the given input is not a single digit number, then display "Invalid Input".



INPUT FORMAT: 

Input consists of 1 integer.
SAMPLE INPUT:

5
SAMPLE OUTPUT:

Five

*/

#include<stdio.h>
int main()
{
    //fill the code
     int n;
     scanf("%d",&n);
     switch(n)
     {
        case 0 : printf("Zero");
            break;
        case 1 : printf("One");
            break;
        case 2 : printf("Two");
            break;
        case 3 : printf("Three");
            break;
        case 4 : printf("Four");
            break;
        case 5 : printf("Five");
            break;
        case 6 : printf("Six");
            break;
        case 7 : printf("Seven");
            break;
        case 8 : printf("Eight");
            break;
        case 9 : printf("Nine");
            break;
        default : printf("Invalid Input");
            break;
         
     }
    return 0;
}
