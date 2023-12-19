#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    ll t;
    cin>>t;
    while(t--) {
        ll a, b;
        cin >> a >> b;
        cout<< (a==0 ? 1 : a + b * 2 + 1) <<endl;
    }
    return 0;
}
