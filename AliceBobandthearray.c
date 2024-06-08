#include <stdio.h>
int main(){
    int t,k=1,startar,endar;
    scanf("%d", &t);
    while (t--) {
        int n, sum = 0, count = 0;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        for (int j = 0; j < n; j++) {
            if (a[j] >= 0) {
                sum = sum + a[j];
            }
        }
        for (int i = 0; i < n; i++) {
            if (a[i] >= 0) {
                startar=i;
                break;
            }
        }
        for (int l = n; l > 0 ; l--) {
            if (0 < a[l]) {
                endar = l;
                break;
            }

        }
        for (int p = startar; p <= endar ; p++) {
            if(a[p]<0){
                count++;
                p++;
            }

        }
        printf("Case %d: %d %d ", k, sum, count);
        k++;
    }


}