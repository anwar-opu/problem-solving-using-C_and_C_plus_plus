#include<stdio.h>
int main(){
    int num,i;
    int len, min;

    scanf("%d", &num);

    len = num * 2 - 1;

    for ( i = 0; i < len; i++) {
        for (int j = 0 ; j <len; j++) {
            min = i < j ?  i : j;
            min = min < len-i ? min : len-i-1;
            min = min < len-j-1 ? min : len-j-1;
            printf("%d ", num-min);
        }
        printf("\n");
    }


}