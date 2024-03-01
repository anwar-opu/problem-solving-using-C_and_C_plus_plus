#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
int main(){
    FastIO;
    int t;
    cin>>t;
    while(t--) {
        vector<ll> v;
        ll n, f, a, b, aMin, minimumCost = 0, flag = 0;
        cin >> n >> f >> a >> b;
        for (int i = 0; i < n; i++) {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        aMin = v[0] * a;
        f = f - min(aMin, b);
        for (int i = 1; i < n; i++) {
            aMin = (v[i] - v[i - 1]) * a;
            minimumCost = min(aMin, b);
            if (f > 0) {
                f = f - minimumCost;
            } else if (f == 0 || f < 0) {
                break;
            }
        }
        if (f > 0) {
            cout << "YES" << endl;
        } else
            cout << "NO" << endl;
    }
}