#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main() {
    FastIO;
    ll t;
    cin>>t;
    while (t--) {
        vector<ll> v;
        int n = 7;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            v.push_back(x);
        }
        cout << v[0]<<" "<< v[1] <<" "<< v[6] - v[0] - v[1] <<endl;
    }
}