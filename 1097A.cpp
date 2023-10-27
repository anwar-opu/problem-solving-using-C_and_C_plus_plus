#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;
int main() {
    FastIO;
    string a,b,c,d,e,f;
    cin>>a;
    cin>>b>>c>>d>>e>>f;
    if(a[0]==b[0] || a[1] == b[1]){
        cout<<"YES";
    }else if(a[0]==c[0] || a[1] == c[1]){
        cout<<"YES";
    }else if(a[0]==d[0] || a[1] == d[1]){
        cout<<"YES";
    }else if(a[0]==e[0] || a[1] == e[1]){
        cout<<"YES";
    }else if(a[0]==f[0] || a[1] == f[1]){
        cout<<"YES";
    }else
        cout<<"NO"<<endl;
    return 0;
}