#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    ll t;
    cin>>t;
    while (t--) {
        ll n;
        unordered_set<int> s;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            s.insert(x);
        }
        if ((n - s.size())% 2 == 0) {
            cout << s.size() << endl;
        } else
            cout << s.size() - 1 << endl;
    }
    return 0;
}