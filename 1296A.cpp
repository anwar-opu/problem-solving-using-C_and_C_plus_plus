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
        ll n, sum = 0,even=0,odd=0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            v.push_back(x);
        }
        for (int i = 0; i < n; i++) {
            if(v[i]%2 == 0){
                even++;
            }else
                odd++;

            sum = sum + v[i];
        }
        if (sum % 2 != 0) {
            cout << "YES" << endl;
        } else{
            if(even !=0 && odd !=0){
                cout<<"YES"<<endl;
            }else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
