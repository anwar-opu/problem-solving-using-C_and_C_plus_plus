#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    ll t;
    cin>>t;
    while(t--) {
        ll n,ans = 0;
        cin >> n;
            if (n % 7 == 0) {
                cout << n << endl;

            } else {
                for (int i = 0; i < 10; ++i) {
                    if((n -n % 10 + i) % 7 == 0){
                        ans = n - n % 10 + i;
                        cout<<ans<<endl;
                        break;
                    }
                }
            }
    }
}
