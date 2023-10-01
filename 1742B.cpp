// B. Increasing
#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    ll t;
    cin>>t;
    while(t--) {
        vector<int> v;
        ll n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        const bool hasDuplicates = std::adjacent_find(v.begin(), v.end()) != v.end();
        if (hasDuplicates == 0) {
            cout << "YES" << endl;
        } else
            cout << "NO" << endl;
    }
    return 0;
}

