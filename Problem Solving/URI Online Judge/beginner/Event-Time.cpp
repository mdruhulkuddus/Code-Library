//For scanf, the * indicates that the field is to be read but ignored, so that e.g. scanf("%*d %d", &i) for the input "12 34" will ignore 12 and read 34 into the integer i.

#include<bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main()
{
    /*
    Dia 5
    08 : 12 : 23
    Dia 9
    06 : 13 : 23 */
    int slot1,slot2,n,days,hour,minit,sec;
    int s1,d1,h1,m1,sc1;
    int s2,d2,h2,m2,sc2;

    scanf("%*s %d ", &d1);
    scanf("%d %*s %d %*s %d", &h1, &m1, &sc1); //hour:minute:second
    scanf("%*s %d",&d2);
    scanf("%d %*s %d %*s %d",&h2,&m2,&sc2);
    slot1=sc1+(m1*60)+(h1*60*60)+(d1*60*60*24); //convert to second
    slot2=sc2+(m2*60)+(h2*60*60)+(d2*60*60*24);

    n=slot2-slot1;
    days=n/86400;
    n=n%86400;
    hour=n/3600;
    n=n%3600;
    minit=n/60;
    sec=n%60;

    printf("%d dia(s)\n", days);
    printf("%d hora(s)\n", hour);
    printf("%d minuto(s)\n", minit);
    printf("%d segundo(s)\n", sec );

    return 0;
}
