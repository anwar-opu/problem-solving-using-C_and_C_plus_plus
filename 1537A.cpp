#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    ll t;
    cin>>t;
    while(t--) {
        ll n, sum = 0;
        vector<ll> v;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            v.push_back(x);
            sum = sum + v[i];
        }
        if(sum<n){
            cout<<"1"<<endl;
        }else
            cout<<sum-n<<endl;
    }
    return 0;
}
