#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    int t,i;
    ll x1,x2,x,y,z,n,s;
    cin>>t;

    while(t--)
    {
        cin>>n;
        ll a[n];
        s = LLONG_MAX;
        for (i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a, a + n);

        for(i = 2; i < n; i++)
        {
            x = a[i-2], y = a[i-1], z = a[i];

            x1 = abs(x - x) + abs(y - x) + abs(z - x);
            x2 = abs(x - y) + abs(y - y) + abs(z - y);

            s = min({s, x1, x2});
        }

        cout<<s<<endl;
    }

    return 0;
}