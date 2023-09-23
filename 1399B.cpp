//B. Gifts Fixing
#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main() {
    FastIO;
    int t;
    cin>>t;
    while(t--) {
        ll n,ans = 0, aMin = 0, bMin= 0;
        vector<ll> a;
        vector<ll> b;
        cin>>n;
        for (int i = 0; i < n; i++) {
            int x;
            cin>>x;
            a.push_back(x);
        }
        for (int i = 0; i < n; i++) {
            int y;
            cin>>y;
            b.push_back(y);
        }
        aMin = *min_element(a.begin(), a.end());
        bMin = *min_element(b.begin(),b.end());
        for (int i = 0; i < n; i++) {
            ans = ans +  max(a[i] - aMin, b[i] - bMin);
        }
        cout<<ans<<endl;
        
    }
    return 0;
}