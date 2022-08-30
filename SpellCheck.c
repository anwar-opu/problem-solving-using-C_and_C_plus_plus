#include <stdio.h>
int main(){

    int t,n, w=0,b=0,c = 0,d=0,e=0;
    scanf("%d", &t);
    while (t--){
        scanf("%d", &n);
        char a[n];
        for (int i = 0; i <=n; i++) {
            scanf("%c", &a[i]);
        }
        if(n==5)
        {
            for (int j = 1; j <= n; j++) {
                if (a[j] == 'T')w++;
                if (a[j] == 'i')b++;
                if (a[j] == 'm')c++;
                if (a[j] == 'u')d++;
                if (a[j] == 'r')e++;
            }
            if (w==1 && b==1 && c==1 && d==1 && e==1) {
                printf("YES\n");
                w=0;
                b=0;
                c=0;
                d=0;
                e=0;
            } else
            {
                printf("NO\n");
                w=0;
                b=0;
                c=0;
                d=0;
                e=0;
            }
        }
        else {
            printf("NO\n");
        }



    }

}
