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
        vector<ll> v1;
        ll n, maxValue = 0, maxPosition, maxLess = 0;

        cin >> n;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            v.push_back(x);
        }
        v1 = v;
        sort(v1.begin(), v1.end());
//    for (int i = 0; i < n; i++) {
//        cout<<v1[i];
//    }
        maxValue = v1[n - 1];
        maxLess = v1[n - 2];
        maxPosition = max_element(v.begin(), v.end()) - v.begin();
//    cout<<maxPosition<<endl;
//    cout<<maxValue<<endl;
        for (int i = 0; i < n; i++) {
            if (maxPosition == i) {
                cout << v[i] - maxLess << " ";
            } else
                cout << v[i] - maxValue << " ";
        }
        cout<<endl;
    }
    return 0;
}
