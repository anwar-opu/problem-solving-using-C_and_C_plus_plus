#include <stdio.h>
int main(){
    char word[60];
    int n,t;

    scanf("%d", &n);
    scanf("%d", &t);

    //INPUT STRING :
    for (int i = 0; i <=n; i++) {
        scanf("%c", &word[i]);
    }

    //T TIME
    while (t--) {
        for (int j = 1; j <= n; j++) {
            if (word[j] == 'B' && word[j + 1] == 'G') {
                //CHANGE  VARIABLE && STORED
                word[j] = 'G';
                word[j + 1] = 'B';
                j++;
            }
        }
    }

    //PRINT CHARTER :
    for (int k = 1; k <=n; k++) {
        printf("%c", word[k]);
    }
}
