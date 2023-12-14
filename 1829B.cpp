#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    ll t;
    cin>>t;
    while(t--) {
        ll n, count = 0, b = 0;
        vector<ll> a;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        for (int i = 0; i < n; i++) {
            if (a[i] == 0) {
                count++;
            } else if (a[i] == 1) {
                count = 0;
            }
            b = max(count, b);
        }
        cout << b << endl;
    }
}