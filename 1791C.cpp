#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    ll t;
    cin>>t;
    while(t--){
    ll n,count=0, a;
    string s;
    cin>>n;
    cin>>s;
    a = n-1;
    for (int i = 0; i < n/2 ; i++) {
        if(s[i]=='1' && s[a] == '0' || s[i]=='0' && s[a] == '1'){
            count = count + 2;
            a--;
        }
        else
            break;
    }
    cout<<n-count<<endl;
    }
    return 0;
}
