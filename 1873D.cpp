#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    ll t;
    cin>>t;
    while(t--) {
        string a;
        ll n, temp = 0, k, count = 0;
        cin >> n >> k;
        cin >> a;
        temp = k - 1;
        ll i = 0;
        for ( i = 0; i < n; i++) {
            if (a[i] == 'B') {
                count++;
                i += temp;
            }
        }
        cout << count << endl;
    }

}
