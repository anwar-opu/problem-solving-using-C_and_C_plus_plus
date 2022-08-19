#include <stdio.h>
#include <string.h>
int main(){
    char bCode[205];
    scanf("%s", bCode);


    int n=strlen(bCode);

    for (int i = 0; i < n; i++) {

        if(bCode[i]=='.'){
            printf("0");

        }

        if(bCode[i]=='-' && bCode[i+1]== '-'){

            printf("2");
            i++;
            continue;

        }
        if(bCode[i] == '-' && bCode[i+1]== '.'){

            printf("1");
            i++;

        }

    }
}