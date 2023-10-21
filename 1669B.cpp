#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    ll t;
    cin>>t;
    while(t--) {
        vector<ll> v;
        ll n, count = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        int max = v[0];
        for (int i = 0; i < n; i++) {
            if (max == v[i]) {
                count++;
                if (count == 3) {
                    cout << v[i] << endl;
                    break;
                }
            } else {
                count = 1;
                max = v[i];
            }
        }
        if (count < 3) {
            cout << "-1" << endl;
        }
    }
    return 0;
}