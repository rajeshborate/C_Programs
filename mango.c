/*
Dora is very much interested in gardening and she decides to plant more trees in her garden. She plants trees in the order of rows and columns. She numbered the trees in column wise order. She planted the mango trees only in the second column from both first and last. But later when the trees grew up, she forgot where she planted mango trees. So help her find out whether the given tree number is a number of mango trees or not. Display whether “It is a mango tree” or “It is not a mango tree”.

 

INPUT FORMAT: 

Input consists of 3 integers.
First input corresponds to the number of rows.
Second input corresponds to the number of columns.
Third input corresponds to the tree number.
 

SAMPLE INPUT:

5
5
20


SAMPLE OUTPUT:

It is a mango tree

*/
#include<stdio.h>
int main()
{
    //fill the code
    int flag=0,rows, columns, pos;
    scanf("%d%d%d",&rows,&columns,&pos);
    for(int i=0;i<rows;i++)
    {
        if(pos == ((columns*i)+2) || pos== ((columns*i)-1))   // || pos == ((columns*i)+1) || pos == (columns*i)
        {
            printf("It is a mango tree");
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("It is not a mango tree");
    return 0;
}
