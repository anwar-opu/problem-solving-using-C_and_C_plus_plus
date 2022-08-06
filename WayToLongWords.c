#include<stdio.h>
#include<string.h>

int main(){
    int n,length;
    char s[100];

    scanf("%d", &n);

    while(n--){
        scanf("%s", &s);
        length=strlen (s);

        if(length<=10){
            printf("%s\n", s);
        }

        else
            printf("%c%d%c\n", s[0],(length-2), s[length-1]);

    }

    return 0;
}