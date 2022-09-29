#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np,a,b,c1,x=0;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    a=(k*l)/nl;
    b=c*d;
    c1=p/np;


    x=min(a,b);
    cout << min(x,c1)/n;
    return 0;
}