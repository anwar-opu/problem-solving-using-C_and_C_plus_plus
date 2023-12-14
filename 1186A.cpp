#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main(){
    FastIO;
    ll a,b,c;
    cin>>a>>b>>c;
    if(a<=b && a<=c){
        cout<<"YES"<<endl;
    }else
        cout<<"NO"<<endl;

    return 0;
}