#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,c=0;
    string a;
    cin >> a;
    int n=a.size();

    for(i=0;i<n;i++)
    {
        if(a[i]=='H' || a[i]=='Q'|| a[i]=='9')
            {
                c++;
                break;
            }
    }
    if(c==0) cout << "NO" << endl;

    else cout << "YES" << endl;

    return 0;
}