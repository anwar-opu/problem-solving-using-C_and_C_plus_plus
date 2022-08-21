#include<stdio.h>

int main(){
    long long  n;
    int count=0;
    scanf("%lld", &n);
    while (n!=0) {
        if (n % 10 == 7 || n % 10 == 4){
            count++;
        }
        n = n / 10;

    }
    if(count==7 || count==4){
        printf("YES");
    } else
        printf("NO");

}


