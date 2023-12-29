#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main() {
    FastIO;
    ll t;
    cin>>t;
    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
        if(a==b){
            cout<<c<<endl;
        }else if(b==c){
            cout<<a<<endl;
        }else
            cout<<b<<endl;
    }
}
