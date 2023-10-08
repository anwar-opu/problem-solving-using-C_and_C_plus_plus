#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    int t;
    cin>>t;
    while(t--) {
        ll n, even = 0, odd = 0;
        vector<int> v;
        cin >> n;
        for (int i = 0; i < n * 2; i++) {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < n * 2; i++) {
            if (v[i] % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }
        if (even == odd) {
            cout << "YES" << endl;
        } else
            cout << "NO" << endl;
    }
    return 0;
}