#include <stdio.h>
#include<string.h>
int main(){
    char word[1000];
    int u=0,l=0;
    scanf("%s", word );

    for (int i = 0; i <strlen(word); i++) {
        if(word[i]>=65 && word[i]<=90){
            u++;
        }
        else l++;
    }
    if(u>l){
        for (int i = 0; i < strlen(word); i++) {
            if(word[i] >= 'a' && word [i] <= 'z')
            word[i] = word[i]-32;
        }
        printf("%s", word);
    }
    else if(u<l || u==l) {
        for (int k = 0; k < strlen(word); k++) {
            if (word[k] >= 'A' && word[k] <= 'Z') {
                word[k] = word[k] + 32;
            }
        }
        printf("%s" , word);
    }

}
