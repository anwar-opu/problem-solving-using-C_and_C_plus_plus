#include <stdio.h>
#include <string.h>
int main(){

    int t,n, w=0,b=0,c = 0,d=0,e=0,f=0;
    scanf("%d", &t);
    while (t--){

        char a[10000];
        scanf("%s", a);
        n = strlen(a);

        if(n==3)
        {

                if (a[0] == 'Y')w++;
                if (a[0] == 'y')d++;

                if (a[1] == 'E')b++;
                if (a[1] == 'e')e++;

                if (a[2] == 'S')c++;
                if (a[2] == 's')f++;

            if ((w==1 || d==1)) {
                if (b == 1 || e == 1) {
                    if (c == 1 || f == 1) {
                        printf("YES\n");
                        w = 0;
                        b = 0;
                        c = 0;
                        d = 0;
                        e = 0;
                        f = 0;
                    }else
                        {
                        printf("NO\n");
                        w=0;
                        b=0;
                        c=0;
                        d=0;
                        e=0;
                        f=0;
                    }
                }else
                    {
                    printf("NO\n");
                    w=0;
                    b=0;
                    c=0;
                    d=0;
                    e=0;
                    f=0;
                }
            } else
            {
                printf("NO\n");
                w=0;
                b=0;
                c=0;
                d=0;
                e=0;
                f=0;
            }
        }
        else {
            printf("NO\n");
        }



    }

}