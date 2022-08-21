#include <stdio.h>
int main(){
    char a[1000];
    int n,count=0;

    scanf("%d", &n);
    for (int j = 0; j <=n; j++) {
        scanf("%c", &a[j]);
    }

    for (int i = 1; i <=n; i++) {
        if(a[i]==a[i+1]){
            count++;
        }
    }
    printf("%d", count);
}