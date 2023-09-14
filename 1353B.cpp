#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    int t;
    cin>>t;
    while (t--) {
        ll n, s, sum = 0;
        cin >> n >> s;
        vector<ll> a;
        vector<ll> b;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            b.push_back(x);
        }
        sort(a.begin(), a.end());
//    for (int i = 0; i < n; i++) {
//        cout<<a[i]<<" ";
//    }
//    cout<<endl;
        sort(b.begin(), b.end(), greater<>());
//    for (int i = 0; i < n; i++) {
//        cout<<b[i]<<" ";
//    }
//    cout<<endl;
        for (int i = 0; i < s; i++) {
            if (a[i] < b[i]) {
                swap(a[i], b[i]);
            }
        }
//    for (int i = 0; i < n; i++) {
//        cout<<a[i]<<" ";
//    }
//    cout<<endl;
//    for (int i = 0; i < n; i++) {
//        cout<<b[i]<<" ";
//    }
//    cout<<endl;
        for (int i = 0; i < n; i++) {
            sum = sum + a[i];
        }
        cout << sum << endl;
    }
    return 0;
}