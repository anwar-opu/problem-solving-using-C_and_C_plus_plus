#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
int main() {
    FastIO;
    ll t;
    cin>>t;
    while(t--) {
        vector<pair<ll, ll>> v;
        ll n;
        cin >> n;
        ll arr[n];
        ll arr1[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (int i = 0; i < n; ++i) {
            v.push_back(make_pair(arr[i], arr1[i]));
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++) {
            cout << v[i].first << " ";
        }
        cout << endl;
        for (int i = 0; i < n; i++) {
            cout << v[i].second << " ";
        }
        cout<<endl;
    }
}