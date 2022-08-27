#include<stdio.h>
int main(){
    int p,q,y, day, Qweek,Ptime,Qtime;
    scanf("%d %d %d", &p, &q, &y);

    day = y * 364;
    Qweek = (day / 7)*y;
    Qtime = Qweek * q;
    Ptime = (day - Qweek) * p ;

    //printf("day= %d week = %d Qtime = %d ptime= %d", day, Qweek, Qtime, Ptime );

    printf("\n%d", (Qtime+Ptime));

    return 0;
}