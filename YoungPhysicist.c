#include <stdio.h>
int main(){

    int i,j;
    int r, c=3;
    int a[100][100];
    int result=0;

    scanf("%d", &r);

    for ( i = 0; i < r; i++) {
        for ( j = 0; j < c; j++) {
               // printf("[%d][%d]", i,j);
                scanf("%d", &a[i][j]);
            }
    }

    for ( i = 0; i < c ; i++) {
        for ( j = 0; j < r; j++) {

                    result = result + a[j][i];
        }
        //printf("%d\n", result);

        if(result!=0){
            printf("NO");
                break;
            }
        }

    if(result==0){
        printf("YES");
    }
}