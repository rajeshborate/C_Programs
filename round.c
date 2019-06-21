//Write a C program to get a float value from the user and display it in the below-mentioned format.

//HINT: Use ceil() and floor() functions from <math.h> header file.

#include<stdio.h>
#include<math.h>
int main()
{
    float a;
    printf("Enter a float value\n");
    scanf("%f",&a);
    int n;
    n=(int)a;
    printf("%d",n);
    printf("\n%f",ceil(a));
    printf("\n%f",floor(a));
    //fill the code
    return 0;
}
