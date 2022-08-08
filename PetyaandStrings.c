#include <stdio.h>
#include <conio.h>
#include <string.h>
int main ()
{
    char str1[30], str2[30];
    int result1;
    int i;

    scanf (" %s", &str1); // take a string
    scanf (" %s", &str2); // take a string


    // use for loop to change string from upper case to lower case
    for ( i = 0; i <= strlen (str1); i++)
    {
// The ASCII value of A is 65 and Z is 90
        if (str1[i] >= 65 && str1[i] <= 90)
            str1[i] = str1[i] + 32; /* add 32 to string character to convert into lower case. */
    }
    // use for loop to change string from upper case to lower case
    for ( i = 0; i <= strlen (str2); i++)
    {
// The ASCII value of A is 65 and Z is 90
        if (str2[i] >= 65 && str2[i] <= 90)
            str2[i] = str2[i] + 32; /* add 32 to string character to convert into lower case. */
    }

    result1= strcmp(str1,str2);

            if(result1==0){
                printf("0");
            }
            else if(result1<0){
                printf("-1");
            }
            else
                printf("1");


    return 0;
}