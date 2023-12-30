#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
bool integer(float k)
{
    if( k == (int) k) return true;
    return false;
}
int main() {
    FastIO;
    ll t;
    cin>>t;
    while(t--) {
        ll n;
        vector<ll> v ;
        float sum = 0;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        for (int i = 0; i < n; ++i) {
            sum = sum + v[i];
        }
        if (integer(sqrt(sum)) == 1) {
            cout << "YES" << endl;
        } else
            cout << "NO" << endl;
    }

    return 0;
}