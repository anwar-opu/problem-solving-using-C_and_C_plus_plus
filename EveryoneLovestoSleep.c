#include<stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int Anum;
        int hour, min;
        int sleepmin;


        scanf("%d %d %d", &Anum, &hour, &min);

        int alarmH[Anum], alarmM[Anum];
        int alarmMin, mini, dTime;

        sleepmin = hour * 60 + min;


        for (int i = 0; i < Anum; i++) {
            scanf("%d %d", &alarmH[i], &alarmM[i]);

            alarmMin = alarmH[i] * 60 + alarmM[i];
            dTime = alarmMin - sleepmin;
            if(dTime<0){
                dTime+=1440;
            }

            if (i == 0) {
                mini = dTime;
            } else if (dTime < mini) {
                mini = dTime;
            }

        }

        int SH = mini/60, SM=mini%60;
        printf("%d %d\n", SH, SM);

    }
}