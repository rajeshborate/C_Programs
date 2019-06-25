/*
QUESTION:
Write a C program to generate student mark sheets with subject details and grades using Structure.

GRADE CALCULATION:

1)if avg>70 the grade will be 1

2)if avg 50 to 70 the grade will be 2

3)if avg is below 50 the grade will be 3

(Note: rn- Roll Number, s-Subjects, avg- Average)



SAMPLE INPUT & OUTPUT:

STUDENT MARKSHEET USING STRUCTURES
Enter the no of students
2
12
65
65
78
65
89
56
89
09
76
65 
34
 
rn    s1    s2    s3    s4    s5    avg    grade
 
12   65   65   78   65   89   72.00      1
 
56   89     9   76   65   34   54.00      2
 

*/

#include<stdio.h>
struct stud
{
    int rn,m1,m2,m3,m4,m5;
    float av;
}s[10];
int main()
{
    //Enter code here.
    int n,i;
    printf("STUDENT MARKSHEET USING STRUCTURES\n");
    printf("Enter the no of students\n\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d%d%d%d",&s[i].rn,&s[i].m1,&s[i].m2,&s[i].m3,&s[i].m4,&s[i].m5);
        s[i].av=(s[i].m1+s[i].m2+s[i].m3+s[i].m4+s[i].m5)/5;
    }
    printf("rn s1 s2 s3 s4 s5 avg grade\n\n");
    for(i=0;i<n;i++)
    {
        printf("%d %d %d %d %d %d %.2f ",s[i].rn,s[i].m1,s[i].m2,s[i].m3,s[i].m4,s[i].m5,s[i].av);
        if(s[i].av>70)
            printf("1\n");
        else if(s[i].av>=50 && s[i].av<=70)
            printf("2\n");
        else
            printf("3\n");
    }
    return 0;
}
