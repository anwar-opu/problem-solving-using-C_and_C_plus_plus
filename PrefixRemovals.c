#include <string.h>
#include <stdio.h>
int main(){

    int t;
    scanf("%d", &t);

    while (t--) {
        char str[200005];
        int flag = 0;
        int i,j;
        //take a string
        scanf("%s", str);

        for ( i = 0; i < strlen(str); i++) {
            for ( j = i + 1; j < strlen(str); j++) {
                if (str[i] == str[j]) {
                    flag++;
                    break;
                }
            }
            if (flag == i) {
                break;
            }
        }


        printf("%s", str+flag);
        printf("\n");
    }
}