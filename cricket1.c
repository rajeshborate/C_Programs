/*
Tom is crazy about cricket. He was watching India vs. Australia World cup final match. Australia won the toss and elected to bat first. They finished batting with a score of X. Next, India started to bat and scored Y runs in N number of balls. As Tom is very crazy, he wants to calculate the run rate and check whether there is a probability for India to win or not. Help him calculate the run-rate and check the probability.

 

INPUT FORMAT & OUTPUT FORMAT:

Input consists of 4 integers.
First input corresponds to the total number of balls.
Second input corresponds to the total number of runs.
Third input corresponds to the number of runs scored.
Fourth input corresponds to the number of balls bowled.
First output corresponds to the total number of overs.
Second output corresponds to the total number of overs finished.
Third output corresponds to the current run rate.
Fourth output corresponds to total run rate.
Overs: 50
Overs finished: 7.3
Current Run rate: 10.7
Total Run rate: 7.5
Eligible to Win



SAMPLE INPUT:

300
375
78
45


SAMPLE OUTPUT:

50
7.3
10.7
7.5
Eligible to Win
 

*/

#include<stdio.h>
int main()
{
    //fill the code
    int total_balls,total_runs,scored_runs,bowled_balls;
    int total_overs;
    float finished_overs,curr_run_rate=0,total_run_rate, temp;
    scanf("%d%d%d%d",&total_balls,&total_runs,&scored_runs,&bowled_balls);
    total_overs = total_balls / 6;
    finished_overs = (bowled_balls / 6) + 0.1  * (bowled_balls % 6);
    curr_run_rate = scored_runs / finished_overs;
    temp = total_overs;
    total_run_rate = total_runs / temp;
    printf("%d\n%0.1f\n%0.1f\n%0.1f", total_overs, finished_overs, curr_run_rate, total_run_rate);
    if(curr_run_rate >= total_run_rate)
     printf("\nEligible to Win");
    else
    printf("\nNot Eligible to Win");
    return 0;
}
