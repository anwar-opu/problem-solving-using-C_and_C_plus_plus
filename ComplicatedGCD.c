#include<stdio.h>
#include <string.h>
int main(){
     char  num1[1000], num2[1000];
    scanf("%s %s",num1, num2);
    int m=strcmp(num1, num2);
    int n=strlen(num1);

    if(m==0){
        for (int i = 0; i < n ; i++) {
            printf("%c", num1[i]);
        }


    } else
        printf("1");


}