#include <stdio.h>
#include <string.h>

void compFunc(char s[], int k)
{
    if(!strcmp(s, "HELLO"))
        printf("Case %d: ENGLISH\n", k );

    else if(!strcmp(s, "HOLA"))
        printf("Case %d: SPANISH\n", k );

    else if(!strcmp(s, "HALLO"))
        printf("Case %d: GERMAN\n", k );

    else if(!strcmp(s, "BONJOUR"))
        printf("Case %d: FRENCH\n", k );

    else if(!strcmp(s, "CIAO"))
        printf("Case %d: ITALIAN\n", k );

    else if(!strcmp(s, "ZDRAVSTVUJTE"))
        printf("Case %d: RUSSIAN\n", k );

    else if(!strcmp(s, "MARHABAAN"))
        printf("Case %d: ARABIAN\n", k );
    else
        printf("Case %d: UNKNOWN\n", k);

}


int main()
{
    int c=1;
    char langStr[15];

    while(1){

        scanf("%s", langStr);

        if(!strcmp(langStr, "#")){
            break;
        }
        compFunc(langStr, c);
        c++;
    }

    return 0;
}
