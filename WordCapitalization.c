#include<stdio.h>
int main(){
    char word[10000];
    scanf("%s" , word);

    if(word[0]>= 'a' && word[0]<='z'){
        word[0] = word[0]-32;
        printf("%s", word);
    }
    else if (word[0]>= 'A' || word[0]<='Z')
        printf("%s", word);


}