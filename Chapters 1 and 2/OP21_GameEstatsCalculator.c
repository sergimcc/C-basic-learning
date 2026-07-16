/* This is the first project of the C learning course
I am going to do a player profile stats revealer with simple variables and operations*/
#include <stdio.h>
int main (void)
{
    printf("THE GAMER STATS CALCULAOR!!!\n");
    printf("Introduce your games played: \n");
    int games_played;
    scanf("%d", &games_played);
    printf("Introduce your people killed: \n");
    int people_killed;
    scanf("%d", &people_killed);
    float KPG_ratio = (float)people_killed / games_played;
    printf("Now, I am going to calculate your KPG ratio, which is the number of people killed per game played\n Calculating... \n");
    printf ("The KPG ratio is: %f\n", KPG_ratio);
    printf ("Wow, you are too bad my friend, need practice in order to improve the %f people killed per game!!!\n", KPG_ratio);
        return 0;
}