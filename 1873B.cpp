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
        ll n, mul = 1;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
//    min = *min_element(v.begin(), v.end());
//    cout<< min<<endl;
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                v[i] = v[i] + 1;
            }
            mul = mul * v[i];
        }
        cout << mul << endl;

    }
    return 0;
}