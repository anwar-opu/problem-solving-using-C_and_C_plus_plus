#include <stdio.h>

int main()
{
    int n,m=1;

    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i-1;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=m;k++)
        {
            printf("*");
        }
        if(m==n){
            for (int j = 0; j < m; j++) {
                printf("*");
            }
        }
        printf("\n");
        if(m==n){
            for (int j = 0; j < m; j++) {
                printf("*");
            }
        }
        m++;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<m;k++)
        {
            printf("*");
        }
        m--;

        printf("\n");
    }

    return 0;
}