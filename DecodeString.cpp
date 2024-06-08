#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i=0,l=0,z,p=97,j=0,s,temp=0;
    cin >> t;
    while(t--)
    {
        cin >> z >> n;

        char c[z];


        int a[z];
        while(n != 0)
        {
             temp = n % 10;
            if(temp==0){
                n /= 10;
                i++;
            }else {
                a[i] = temp;
                n /= 10;
                j++;
                i++;
            }
        }
        for (int k = 0; k < j; k++) {
            cout<<a[k];
        }

       /* while(z--)
        {
            if(a[j]==0)
            {
                l=(a[j+2]*10)+a[j+1];
                s=97+(l-1);
                cout << (char)s;
                j=j+3;

            }
            else
            {
                s=97+(a[j]-1);
                cout << (char)s;

                j++;
            }
        }
        // for(i=0;i<x;i++)
        // cout << c[i];*/

    }
    return 0;
}