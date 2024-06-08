#include <stdio.h>
int main(){
    int t,n,red1=0,green1=0,blue1=0,red2=0,green2=0,blue2=0,row1=0,row2=0,countGB1=0,countGB2=0;
    scanf("%d", &t);
    while (t--){
        scanf("%d", &n);
        char x[n],y[n];
        scanf("%s %s", x, y);
        //printf("%c", x[0]);
       // printf("%c", y[0]);
        for (int j = 0; j < n; j++) {
            if(x[j]=='B' && x[j+1]=='G'){
                countGB1++;
                j++;
            }
            if(y[j]=='B' && y[j+1]=='G'){
                countGB2++;
                j++;
            }

        }
        if(countGB1==countGB2 && (countGB1!=0 && countGB2!=0)){
            printf("YES\n");
            countGB1=0;
            countGB2=0;
        }
        if(countGB1==0 && countGB2==0){
            for (int i = 0; i < n; i++) {
                if (x[i] == 'R') red1++;
                if (x[i] == 'G') green1++;
                if (x[i] == 'B') blue1++;
                if (y[i] == 'R') red2++;
                if (y[i] == 'G') green2++;
                if (y[i] == 'B') blue2++;
                countGB1=0;
                countGB2=0;

            }
            row1 = green1 + blue1;
            row2 = green2 + blue2;

            if (row1 == row2 && red1 == red2) {
                printf("YES\n");
                row1 = 0, row2 = 0, red1 = 0, red2 = 0, green1 = 0, green2 = 0, blue1 = 0, blue2 = 0;
            } else {
                printf("NO\n");
                row1 = 0, row2 = 0, red1 = 0, red2 = 0, green1 = 0, green2 = 0, blue1 = 0, blue2 = 0;
            }
        }
        else {
            printf("NO\n");
            countGB1 = 0;
            countGB2 = 0;
        }

    }
}